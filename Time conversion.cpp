#include<stdio.h>
int main()
{
    char TimeString[11];
    int hours,minutes,seconds,difference=0;
    char period[3];
    
    sscanf("%d:%d:%d%s",&hours,&minutes,&seconds,period );
    
    switch(period)
    {
        case "AM":
        	if(hours == 12)
        	{
        		hours = 0;
			}
			break;
        case "PM":
        	if(hours > 12)
        	{
        		difference = hours-12;
        		hours = hours+difference;
			}
			break;
    }
    
    printf("%d:%d:%d%s",hours,minutes,seconds,period);
    return 0;
    
}
