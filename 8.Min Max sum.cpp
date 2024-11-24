#include<stdio.h>
int main()
{
    long array[5],min,max,sum=0,sum_min=0,sum_max=0;
    for(int i=0 ; i<5 ; i++)
    {
        scanf("%ld",&array[i]);
    }
    min = array[0];
    max = array[0];
    
    for(int i=0 ; i<5 ; i++)
    {
        if(array[i]>max)
            max = array[i];
        
        if (array[i]<min)
            min = array[i];

        sum = sum+array[i];
    }
    
    sum_min = sum-max;
    sum_max = sum-min;
    
    printf("%ld %ld",sum_min,sum_max);
    return 0;   
}

