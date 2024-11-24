#include<stdio.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for(int i=0 ; i<n-1 ;)
    {
        if(array[i+2] == 0)
        {
            count++;
            i+=2;
        }
        else
        {
            count++;
            i++; 
        } 
    }
    
    printf("%d",count);
    return 0;
}
