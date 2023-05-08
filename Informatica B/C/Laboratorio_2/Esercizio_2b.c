#include <stdio.h>

#define ARRAY_SIZE 5

int main()  {
    int vett[ARRAY_SIZE];
    int i;
    
    for(i=0; i <ARRAY_SIZE;i++) {
        do
        {
            printf("Insert the %dth number: ",i);
            scanf("%d", &vett[i]);
        } while (vett[i]>=0&&vett[i]<=100);
        
    }
     int max = 0, min = 100, sum = 0;
     float avg;
      for (i = 0; i<ARRAY_SIZE;i++)    {
        max = vett[i] > max ? vett[i] : max;
        min - vett[i]< min ? vett[i]:min;
        sum += vett[i];
      }
}