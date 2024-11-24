#include<stdio.h>
int main()
{
    int n,d,m,sum=0,count=0;
    scanf("%d",&n);
    int a[n+1];
    
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    
    scanf("%d%d",&d,&m);
    
    for(int i=0 ; i<n ; i++)
    {
        sum = 0;
        for(int j=0 ; j<m ; j++)
        {
            sum = sum+a[i+j];
        }
        if(d==sum)
        {
            count++;
        }   
    }
    printf("%d",count);
    return 0;
}

