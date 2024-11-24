#include<stdio.h>
int main()
{
    int n,p,fturns=0,bturns=0;
    scanf("%d",&n);
    scanf("%d",&p);
    int a[n];
    if(n%2==0)
    n++;
    for(int i=0 ; i<=n ; i++)
    {
        a[i] = i;
    }
    
    //count from front
    for(int k=0 ; k<=n ; k+=2)
    {
        if(a[k]==p || a[k+1]==p)
        {
            break;
        }
        fturns++;
    }
    
    //count from back
    for(int j=n ; j>=0 ; j-=2)
    {
        if(a[j]==p || a[j-1]==p)
        {
            break;
        }
        bturns++;
    }
    
    if(fturns<bturns)
    printf("%d",fturns);
    
    else
    printf("%d",bturns);
    
    return 0;
}

