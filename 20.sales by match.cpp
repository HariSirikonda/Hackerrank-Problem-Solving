#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],sort[n];
	for(int j=0 ; j<n ;j++)
	{
		scanf("%d",&a[j]);
	}
	
	sort[0] = a[0];
	
	for(int i=0 ; i<n ; i++)
	{
		for(int k=0 ; k<i ; k++)
		{
			if(!(sort[k] == a[i]))
			{
				sort[k] = a[i];
			}
		}
	}
	
	for(int m=0 ; m<n ; m++)
	{
		printf("%d",sort[m]);
	}
	
	return 0;
	
}
