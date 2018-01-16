#include <stdio.h>
#include <stdlib.h>

char* reserve(char* s)
{
	char* l = s;
	char* r = s;
	char temp;
	while(*r!='\0')
		r++;
	--r;
	while(r > l)
	{	
		temp = *l;
		*l = *r;
		*r = temp;
		l++;	
		r--;
	}
	return s;
}

//char* _itoa(int value, char* string, int radix)
char* my_itoa(int value)
{
	int issub = value;
	int step = 0;
	static char arr[100] = {0};//静态区，否则出来就会销毁。
	if (value < 0)
	{
		value = -value;
	}
	
	while (value)
	{
		arr[step++] = value%10 +'0';
		value = value/10;
	}
	if (issub < 0)
	{
		arr[step] = '-';
	}
	return reserve(arr);
}

int main()
{
	char arr[] = "123456";
    char buffer[20];
	reserve(arr);
	printf("%s\n",arr);
	printf("my_itoa:%s\n", my_itoa(-21));

    _itoa(-21, buffer,10);
	printf("c_itoa: %s\n", buffer);
	printf("c_itoa: %s\n", _itoa(-21, buffer,10));

	return 0;
}