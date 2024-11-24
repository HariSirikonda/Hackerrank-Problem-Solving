#include<stdio.h>
int main()
{
    long n,max=0,count=0;
    scanf("%ld",&n);
    long candles[n];
    
    for(int i=0 ; i<n ; i++)
    {
        scanf("%ld",&candles[i]);
    }
    
    for(int i=0 ; i<n ; i++)
    	if(candles[i] > max)
            max = candles[i];
    
    for(int i=0 ; i<n ; i++)
    {
        if(candles[i] == max)
        {
            count++;
        }
    }
    
    printf("%ld",count);
    return 0;
    
}
