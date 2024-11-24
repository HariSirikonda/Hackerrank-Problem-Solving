#include<stdio.h>
int main()
{
    int n,ig=0,diff=0;
    scanf("%d",&n);
    int grades[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&grades[i]);
    }
    for(int i=0 ; i<n ; i++)
    {
        ig = 0;
        if(grades[i] > 37 && grades[i] <= 100)
        {
            ig = ((grades[i]/5)+1)*5;
            if((ig-grades[i]) < 3)
            {
                printf("%d\n",ig);
            }
            else
            {
                printf("%d\n",grades[i]);
            }
            
        }
        else if(grades[i] <= 37)
        {
            printf("%d\n",grades[i]);
        }
    }
    return 0;
}

