#include<stdio.h>
int main()
{
    int a[100],b[100],alice_points=0,bob_points=0;
    //array A input
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    
    //Array B input
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    
    for(int i=0;i<3;i++)
    {
        if(a[i] > b[i])
        {
            alice_points++;
        }
        if(a[i] < b[i])
        {
            bob_points++;
        }
    }
    printf("%d %d",alice_points,bob_points);
    return 0;
    
}

