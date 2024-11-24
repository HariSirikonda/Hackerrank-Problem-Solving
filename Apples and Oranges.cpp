#include<stdio.h>
int main()
{
    int a,s,t,b,m,n,n_apples=0,n_oranges=0;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    int apples[m],oranges[n];
    if(a<s<t<b)
    {        
        //taking apples input
        for(int i=0 ; i<m ; i++)
        {
            scanf("%d",&apples[i]);
            apples[i] = apples[i]+a;
            if(apples[i] >= s && apples[i] <= t)
            {
                n_apples++;
            }
        }
        
        //taking oranges input
        for(int i=0 ; i<n ; i++)
        {
            scanf("%d",&oranges[i]);
            oranges[i] = oranges[i]+b;
            if(oranges[i] <= t && oranges[i] >= s)
            {
                n_oranges++;
            }
        }
        printf("%d\n%d",n_apples,n_oranges);
    }    
    
    return 0;
}    


