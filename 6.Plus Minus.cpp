#include<stdio.h>
int main()
{
    int n;
	float p_ele=0,n_ele=0,zeroes=0;
    float p_fac,n_fac,z_fac;
    scanf("%d",&n);
    int a[n];
    //take input
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0){
            p_ele = p_ele+1;
        } 
        if (a[i]<0){
            n_ele++;
        }
        if(a[i]==0){
            zeroes++;
        }
    }
    p_fac = p_ele/n;
    n_fac = n_ele/n;
    z_fac = zeroes/n;
    
    printf("%.6f\n",p_fac);
    printf("%.6f\n",n_fac);
    printf("%.6f",z_fac);    
}
