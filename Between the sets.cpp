#include<stdio.h>
int main()
{
    int n,m,c[200],limit,min,max=0,count=0,p=1;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(int i=0 ; i<n ; i++)
    {
        //taking input into array 1
        scanf("%d",&a[i]);
        
        //add into c array
        c[i] = a[i];
    }
    for(int i=0 ; i<m ; i++)
    {
        //taking input into array 2
        scanf("%d",&b[i]);
        
        //add into c array
        c[n+i] = b[i];
    }
    limit = n+m;
    for(int i=0 ; i<=limit ; i++)
    {
        if(c[i] > max)
        max = c[i];
        
        min = c[0];
        if(c[i] < min)
        min = c[i];
    }
       
    //for loop starts
    for(int x=min ; x<max ; x++)
    {
        for(int i=0 ; i<n ; i++)
        {
            if(x%a[i] == 0)
            {
                p=1;
            }
            else
            {
                p=0;
                break;
            }
        }
        
        if(p==1)
        {
            for(int j=0 ; j<m ; j++)
            {
                if(b[j]%x == 0)
                {
                    p=1;
                }
                else
                {
                    p=0;
                    break;
                }
            }
            if(p==1)
            {
                count++;
            }
        }
    }
    
    printf("%d",count);
    return 0;
 
}
