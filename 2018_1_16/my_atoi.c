#include <stdio.h>
#include <stdlib.h>
int my_atoi(const char* prr)
{
     int flag = 1;
     int total = 0;
     char s;
     while (*prr == ' ')//if(x==' '||x=='\t'||x=='\n'||x=='\f'||x=='\b'||x=='\r')  
     {
           prr++;
     }
     s = *prr;
     if ('-' == s)
     {
           flag = -1;
           prr++;
     }
     while((*prr >= '0')&&(*prr <= '9'))
     {
           total = 10 * total + (*prr - '0');
           prr++;
     }
     return flag*total;
}
int main()
{
     char *arr = "-1a";
     printf("my_atoi:%d\n",my_atoi(arr));
     printf("c_atoi:%d\n", atoi(arr));
     return 0;
}
