#include<stdio.h>
#include<string.h>
int main()
{
	char string[10],count=0;
	scanf("%s",&string);
	
	for(int i=0 ; i<10 ; i++)
	{
		if(string[i] == 'a')
		{
			count++;
		}
	}
	
	printf("%d ",count);
	printf("%d",strlen(string));
	
	
	return 0;
}
