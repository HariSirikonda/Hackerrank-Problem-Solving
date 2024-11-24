#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,principleDiagonal=0,secondaryDiagonal=0;
    scanf("%d",&n);
    int array[n][n];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    
    for(int i=0; i<n; i++)
    {
        principleDiagonal += array[i][i];
    }
    
    for(int i=0;i<n;i++)
        secondaryDiagonal += array[i][n-i-1];

    int diff = principleDiagonal - secondaryDiagonal;
    int absolute = abs(diff);
    
    printf("%d",absolute);
    
}

