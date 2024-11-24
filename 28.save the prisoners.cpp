#include<stdio.h>
int main()
{
    long int test_cases,n,m,s,warn;
    scanf("%ld",&test_cases);
    
    for(int i=0 ; i<test_cases ; i++)
    {
        scanf("%ld%ld%ld",&n,&m,&s);
        for(int j=s ; m>=1 ; j++,m--)
        {
            if(j>n)
            j=1;
            
            if(m==1)
            warn = j;
        }
        printf("%ld\n",warn);
    }
    
    
    return 0;
}

