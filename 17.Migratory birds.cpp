#include<stdio.h>
int main()
{
    int n,initial_array[] = {0,0,0,0,0},max=0,max_index=0;
    scanf("%d",&n);
    int input_array[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&input_array[i]);
    }
    
    for(int k=0 ; k<n ;k++)
    {
        if(input_array[k] == 1)
        {
            initial_array[0]++;
        }
        else if(input_array[k] == 2)
        {
            initial_array[1]++;
        }
        else if(input_array[k] == 3)
        {
            initial_array[2]++;
        }
        else if(input_array[k] == 4)
        {
            initial_array[3]++;
        }
        else
        {
            initial_array[4]++;
        }
    }
    
    for(int j=0 ; j<5 ; j++)
    {
        if(initial_array[j] > max)
        {
            max = initial_array[j];
            max_index = j;
        }
    }
    
    printf("%d",max_index+1);
    return 0;
    
}
