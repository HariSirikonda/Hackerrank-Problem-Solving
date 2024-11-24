#include<stdio.h>
int main()
{
    int n,sum=0,valleys=0;
    scanf("%d",&n);
    char string[n];
    scanf("%s",&string);
    
    for(int i=0 ; i<n ; i++)
    {
        if(string[i]=='U')
        {   
            sum++;
            if(sum==0)
            valleys++;
        }
        
        if(string[i]=='D')
        {
            sum--;
        }
    }
    
    printf("%d",valleys);
    return 0;
}

