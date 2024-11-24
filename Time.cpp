#include<stdio.h>
#include<string.h>
int main()
{
    char time[10];
    gets(time);
    
    if(time[8]=='A')
    {
        if(time[0] == '1' && time[1] == '2')
        {
            time[0] = '0';
            time[1] = '0';
        }
    }
    else
    {
        if(!(time[0] == '1' && time[1] == '2'))
        {
            if(time[1] == '8')
            {
                time[0] = '2';
                time[1] = '0';
            }
            else if(time[1] == '9')
            {
                time[0] = '2';
                time[1] = '1';
            }
            else if(!(time[0] == '1' && time[1] == '2'))
            {
                time[0] += 1;
                time[1] += 2;
            }
        }
    }
    time[8] = '\0';
    puts(time);
    
    return 0;
}
