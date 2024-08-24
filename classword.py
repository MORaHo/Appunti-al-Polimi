import numpy
import pygame as pg
from random import randint
from bs4 import BeautifulSoup as bs
import requests

ROWS = 15
COLUMNS = 15
BLOT = 7
EMPTY = 0
SPACE = 40
LINE_COLOUR = (0,0,0)
WIDTH = SPACE * (COLUMNS)
HEIGHT = SPACE * (ROWS)

URL = "https://www.crosswordnexus.com/finder.php?clue=&pattern="

run = True
MASK = 63 ############# Large mask as to not limit puzzle size.

#Initiate pygame

pg.init()
screen = pg.display.set_mode((WIDTH,HEIGHT),0,32)
default_font = pg.font.SysFont("Arial", SPACE-3)
pg.display.set_caption("Crossword")

class Word():

    def __init__(self,start,end):
        self.start = start
        self.end = end
        self.length = self.ruler()
        self.neighbours = []
        self.involved_cells = self.find_involved_cells()
        self.neighbours = []
        self.parent = None
        self.word = self.fill_dots()

    def ruler(self):
        return self.end[0] - self.start[0] + self.end[1] - self.start[1] + 1

    def find_involved_cells(self):
        if self.end[0] == self.start[0]:
            direction_vector = (0,1)
        else:
            direction_vector = (1,0)
    
        return [[self.start[0]+direction_vector[0]*distance,self.start[1]+direction_vector[1]*distance] for distance in range(self.length)]
    
    def find_neighbours(self):
        
        for word in words:

            # to reduce calculations we could check if they are facing the same directions
            # since it would be impossible for words to be neighbours if they are facing the same direction
            try:
                if self.involved_cells == word.involved_cells: #pass on itself
                    continue
            except:
                pass

            #looking at the elements in the shorter array and seeing if they are in the other array, if so they are neighbours
            for row in range(len(self.involved_cells)):

                if self.involved_cells[row] in word.involved_cells:
                    self.neighbours.append(word)
                    break

    def clean_involved_cells(self):

        rows = len(self.involved_cells) # Number of rows

        for i in range(rows):
            if (self.involved_cells[i][0] ^ MASK) > MASK:
                
                self.involved_cells = numpy.delete(self.involved_cells,[j for j in range(i,rows)],axis=0)
                #print(self.involved_cells)
                break
    
    def fill_dots(self):
        return ["?" for _ in range(self.length)]

    def place_word(self):
        #for i,cell in enumerate(self.involved_cells):
            #grid[]
        pass
    
    def clear(self):
        self.fill_dots()

    def find_word(self):
        
        check = False
        for word in words:
            if "?" in word.word:
                check = False
                break
            else:
                check = True## This should break the code and place all the words (probably the other way around)
                pass
        
        if check == True: # place all words
            pass

        for neighbour in self.neighbours:
            for k,cell in enumerate(self.involved_cells):
                if cell in neighbour.involved_cells:
                    letters = list(self.word)
                    neighbour_cell_index = neighbour.involved_cells.index(cell)
                    letter = neighbour.word[neighbour_cell_index]
                    print(letter)
                    print(self.word[k])
                    letters[k] = letter
                    self.word = letters

        add_to_url = "".join(self.word)
        page = requests.get(URL + str(add_to_url))
        soup = bs(page.content, "html.parser")
        page_words = soup.find_all("a")
        page_words = [page_word for page_word in page_words if "/word/" in page_word["href"]]
        if len(page_words) == 0:
            print("0")
            for neighbour in self.neighbours:
                self.word = self.fill_dots()
                neighbour.word = neighbour.fill_dots()
                neighbour.find_word()
            self.find_word()
            # go back to all the previous neighbours
        else:
            print("place")
            word_text = page_words[randint(0,len(page_words)-1)].text
            self.word = word_text



class Grid():

    def __init__(self,rows,columns):
        self.rows = rows
        self.columns = columns
        self.columns_with_buffers = self.columns + 2
        self.rows_with_buffers = self.rows + 2
        self.matrix = self.gridGenerator(self.rows_with_buffers,self.columns_with_buffers)
        self.horizontals = []
        self.horizontal_words = []
        self.verticals = []
        self.vertical_words = []

    #generate grid adding offset on either side
    def gridGenerator(self,rows,columns):
        grid = numpy.zeros((rows,columns),dtype=object)
        for i in [0,-1]:
            grid[i,:] = BLOT
            grid[:,i] = BLOT
        return grid

    def draw(self):
        screen.fill((255,255,255))
        
        for i in range(0,self.columns):
            pg.draw.line(screen, LINE_COLOUR, (SPACE*i,0),(SPACE*i, (COLUMNS) * SPACE), 1) #Vertical Lines
        
        for j in range(0,self.rows):
            pg.draw.line(screen, LINE_COLOUR, (0,SPACE*j),((ROWS) * SPACE , SPACE*j), 1) # Horizontal lines
    
        for i in range(0,self.rows):
            for j in range(0,self.columns):
                if self.matrix[i+1][j+1]:

                    rect = pg.Rect(0,0,SPACE-3,SPACE-3)
                    rect.topleft = (SPACE*(i)+2,SPACE*(j)+2)
                    pg.draw.rect(screen,(0,0,0),rect)

        pg.display.update()
    
    def empty(self,cell_row,cell_column):
        
        self.matrix[cell_row][cell_column] = EMPTY #
    
    def place(self,cell_row,cell_column):

        self.matrix[cell_row][cell_column] = BLOT

    def check_not_empty(self,cell_row,cell_column):
        
        return (self.matrix[cell_row][cell_column] != BLOT)
    
    def find_horizontals(self):

        for y in range(0,COLUMNS+1):
            row = self.matrix[:,y+1] 
            for j in range(len(row)):
                
                if row[j] == EMPTY and row[j-1] != EMPTY:
                    self.horizontals.append((j,y+1))

                if row[j] == EMPTY and row[j+1] != EMPTY:
                    self.horizontals.append((j,y+1))

        for y in range(int(len(self.horizontals)/2)):
            word = Word(self.horizontals[2*y],self.horizontals[2*y+1])
            if word.length != 1:
                self.horizontal_words.append(word)
    
    def find_verticals(self):

        for x in range(0,ROWS+1):
            column = self.matrix[x+1,:]
            for y in range(len(column)):
                
                if column[y] == EMPTY and column[y-1] == BLOT:
                    self.verticals.append((x+1,y))

                if column[y] == EMPTY and column[y+1] == BLOT:
                    self.verticals.append((x+1,y))

        for x in range(int(len(self.verticals)/2)):
            word = Word(self.verticals[2*x],self.verticals[2*x+1])
            if word.length != 1:
                self.vertical_words.append(word)


def get_mouse_position():

    position = pg.mouse.get_pos()
    x_position = int((position[0]) // SPACE) + 1
    y_position = int((position[1]) // SPACE) + 1
    return x_position , y_position


grid = Grid(ROWS,COLUMNS)
grid.draw()

while run:

    for event in pg.event.get():

        if event.type == pg.QUIT:
            run = False

        if event.type == pg.MOUSEBUTTONDOWN:

            mouse_position = get_mouse_position()
            row = mouse_position[0]
            column = mouse_position[1]

            if grid.check_not_empty(row,column):
                grid.place(row,column)
                grid.draw()
            else:
                grid.empty(row,column)
                grid.draw()


grid.find_verticals()
grid.find_horizontals()

words = grid.vertical_words + grid.horizontal_words

#print(len(words)) #Should be 34

for word in words: word.find_neighbours()
#for word in words: word.clean_involved_cells() #I don't think this is needed anymore

#for neighbour in words[5].neighbours: print(neighbour.involved_cells)

#for word in words: print(word.involved_cells)

for word in words: word.find_word()

for word in words: print(word.word)

