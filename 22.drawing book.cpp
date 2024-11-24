#include<stdio.h>
int main()
{
    int n,turnsf=0,p;
    scanf("%d",&n);
    scanf("%d",&p);
    if(!(n%2 == 0))
    n++;
    int a[n];
    
    if(p==1)
    {
        printf("%d",turnsf);
        turnsf++;
    }
    else
    {
        //count from front
        for(int i=1 ; i<n ; i+=2)
        {
            if(a[i]==p || a[i+1]==p)
            {
                printf("%d",turnsf);
                break;
            }
            turnsf++;
        }
    }
    return 0;
}
