#include<stdio.h>
int main()
{
    int n;
    long int a[10],sum=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        sum = sum+a[i];
    }
    
    printf("%ld",sum);
    return 0;
}

