#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
	int i = 8;
	double d = 8.3;
	
	int * p = NULL;
	double * r = NULL;
	
	p = &i;
	r = &d;
	
	printf("int i, %i, \t staat op plaats. %p. \n", *p, p);
	printf("int i, %f, \t staat op plaats. %p. \n", *r, r);
	
	*p = 5;
	*r = 9.6;
	
	printf("int i, %i, \t staat op plaats. %p. \n", *p, p);
	printf("int i, %f, \t staat op plaats. %p. \n", *r, r);
	
}
*/
/*
int main()
{
	int arr[] = {1,2,3,4};
	char arr2[] = {'A','B','C'};
	
	int *p = NULL;// arr;
	char *c = NULL;// arr2;
	
	p = arr;
	c = arr2;
	
	printf("int i, %i, \t staat op plaats. %p. \n", *p, p);
	printf("char c, %c, \t staat op plaats. %p. \n", *c, c);
	
	p++;
	c++;
	printf("int i, %i, \t staat op plaats. %p. \n", *p, p);
	printf("char c, %c, \t staat op plaats. %p. \n", *c, c);
	
	p++;
	c++;
	printf("int i, %i, \t staat op plaats. %p. \n", *p, p);
	printf("char c, %c, \t staat op plaats. %p. \n", *c, c);
	
}
*/
//*
int main()
{
	char str1[5];
	
	char str2[5];
	
	printf("Enter string 1: ");
	scanf("%s", str1);
		
	printf("Enter string 1: ");
	scanf("%s", str2);
	
	char * ptr1 = NULL;
	char * ptr2 = NULL;
	
	ptr1 = str1;
	ptr2 = str2;
	
	while (*ptr1 != 0 || *ptr2 != 0)
	{
		while (*ptr2 == *ptr1)
		{
			ptr1++;
			ptr2++;
		}
	}
}




