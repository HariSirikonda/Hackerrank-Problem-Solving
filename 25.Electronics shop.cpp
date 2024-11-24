#include<stdio.h>
int main()
{
    int budget,m,n,temp,prices[1000],max=0;
    scanf("%d%d%d",&budget,&m,&n);
    int keyboards[m],usb[n];
    
    //keyboards input
    for(int n=0 ; n<m ; n++)
    scanf("%d",&keyboards[n]);
    
    //usb inputs
    for(int i=0 ; i<m ; i++)
    scanf("%d",&usb[i]);
    
    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            temp = keyboards[i]+usb[j];
            prices[i] = temp;
            temp=0;
        }
        if((prices[i] <= budget) && (prices[i]>max))
        {
            max = prices[i];
        }
    }
    
    printf("%d",max);
    return 0;
}

