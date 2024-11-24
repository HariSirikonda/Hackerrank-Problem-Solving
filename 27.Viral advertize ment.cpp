#include<stdio.h>
int main()
{
    int day,shared=5,liked,cumulative=0;
    
    scanf("%d",&day);
    
    for(int i=1 ; i<=day ; i++)
    {
        liked = shared/2;
        cumulative += liked;
        shared = liked*3;
    }
    
    printf("%d",cumulative);
    
    return 0;
}

