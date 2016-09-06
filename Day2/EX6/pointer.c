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





