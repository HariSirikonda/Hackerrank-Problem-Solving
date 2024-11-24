#include<stdio.h>
int main()
{
    int n,k,b,sum=0,anna_charge;
    scanf("%d%d",&n,&k);
    int array[n];
    
    //Take the items input
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&array[i]);
    }
    
    //take input of anna's charged
    scanf("%d",&b);
    
    //find the sum exept the kth element
    for(int j=0 ; j<n ; j++)
    {
        if(j==k)
        {
            j++;
        }
        sum = sum+array[j];
    }
    
    //calculate anna's charge
    anna_charge = sum/2;
    
    if(anna_charge == b)
    {
        printf("Bon Appetit");
    }
    else {
        printf("%d",b-anna_charge);
    }
    
    return 0;
    
}
