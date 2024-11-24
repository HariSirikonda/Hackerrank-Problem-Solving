#include<stdio.h>
int main()
{
    int test_cases;
    scanf("%d",&test_cases);
    for(int i=0 ; i<test_cases ; i++)
    {
        int number,remainder,temp,count=0;
        scanf("%d",&number);
        temp = number;
        while(temp>0)
        {
            remainder = temp%10;
            if(!(remainder==0))
            {
                if(number%remainder == 0)
                count++;   
            }
            temp = temp/10;
        }
        
        printf("%d\n",count);
    }
    
    return 0;
}
