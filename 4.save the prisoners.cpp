#include<stdio.h>

void line()
{
        int n,m,s;
        scanf("%d%d%d",&n,&m,&s);
        if((s+m-1)%n==0)
        printf("%d\n",n);
        
        else
        printf("%d\n",(s+m-1)%n); 
}
int main()
{
    int test_cases;
    scanf("%d",&test_cases);
    for(int i=0 ; i<test_cases ; i++)
    {
        line();
    }
    
    return 0;
}

