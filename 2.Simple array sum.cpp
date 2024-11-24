#include<stdio.h>
int main()
{
    int array[1000],size,sum=0;
    scanf("%d",&size);
    
    if(size<=0 || size>1000)
    {
        return 0;
    }
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    
    for(int i=0;i<size;i++)
    {
        sum = sum+array[i];
    }
    
    printf("%d",sum);
    return 0;
}

