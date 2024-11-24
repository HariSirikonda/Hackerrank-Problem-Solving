#include<stdio.h>
int main()
{
    int n,high_score=0,low_score=0,hs=0,ls=0;
    scanf("%d",&n);
    int a[n];
    for(int j=0 ; j<n ; j++)
    {
        scanf("%d",&a[j]);
    }
    high_score=a[0];
    low_score=a[0];
    for(int i=1 ; i<n ; i++)
    {
        if(a[i] > high_score)
        {
            high_score = a[i];
            hs++;
        }
        if(a[i] < low_score)
        {
            low_score = a[i];
            ls++;
        }
    }
    printf("%d %d",hs,ls);
    return 0;
}

