#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

char* strpast1(char* arg1, ...);
char* strpast2(char* arg1, ...);

int main()
{
	char* first = strpast1("hello", "world", "this", "looks", "cool",(char*)NULL);
	char* second = strpast1("No", "it", "doesn't",(char*)NULL);

	printf("%s\t%s\n",first,second);
}

char* strpast1(char* arg1, ...)
{
	int length = strlen(arg1)+1;
	char* string = malloc(length);
	strcat(string,arg1);

	va_list ap;
	char* arg;

	va_start(ap,arg1);
	while((arg = va_arg(ap,char*))!=NULL)
	{
		length = length + strlen(arg);
		string = (char*)realloc(string,length);
		strcat(string,arg);
	}
	va_end(ap);
	return string;
}
char* strpast2(char* arg1, ...)
{
	
}







/* //EX1
int sumargs (int arg1, ...);

int main()
{
	int a = sumargs(5,6,9,8,2,7,2,0);
	printf("%d\n",a);
}

int sumargs (int arg1, ...)
{
	va_list ap;
	int i;
	int result = 0;

	va_start(ap, arg1);
	for (i = arg1; i>0; i = va_arg(ap, int))
	{
		result = result + i;
	//	printf("%d\t%d\n", i, result);
	}
	va_end(ap);
	return result;	
}
*/
