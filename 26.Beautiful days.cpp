#include<stdio.h>
int main()
{
    int i,j,k,m,remainder=0,reverse=0,diff,count=0;
    scanf("%d%d%d",&i,&j,&k);
    for(int x=i ; x<=j ; x++)
    {
        reverse = 0;
        for(int a=x ; a>0 ; a = a/10)
        {
            remainder = a%10;
            reverse = (reverse*10)+remainder;
        }
        if(reverse>x)
        diff = reverse-x;
        else
        diff = x-reverse;
        
        if(diff%k == 0)
        count++;
    }
    
    printf("%d",count);
    return 0;
}
