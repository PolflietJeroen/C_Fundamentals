#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
	char * p = malloc(8);
	char * m = malloc(17);
	char * l = malloc(25);
	char * o = malloc(1000);
	
	printf("%p\n",p);
	printf("%p\n",m);
	printf("%p\n",l);
	printf("%p\n",o);
	
	free(p);
	p=NULL;
	free(m);
	m=NULL;
	free(l);
	l=NULL;
	free(o);
	o=NULL;
}
*/

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int cmpfuncr (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}

int main( int argc, char* argv[])
{
	int a = 0;
	int n = 0;
	printf("Enter amount: ");
	scanf("%d", &a);
	
	int * p = malloc(sizeof(int)*a);
	int * q = NULL;
	for(int i = 0; i < a; i++)
	{
		q = p + i;
		int b = 0;
		printf("Enter number: ");
		scanf("%d", &b);
		*q = b;		
	}
	
	printf("Before sorting the list is: \n");
	for( n = 0 ; n < a; n++ ) 
	{	   
		q = p + n;
      printf("%d ", *q);
	}
	if(argc == 1)
	{
		qsort(p, a, sizeof(int), cmpfunc);
	}
	else if (*argv[1] == "-r")
	{
		qsort(p, a, sizeof(int), cmpfuncr);
	}
	printf("\nAfter sorting the list is: \n");
	for( n = 0 ; n < a; n++ ) 
	{   
		q = p + n;
		printf("%d ", *q);
	}
	printf("\n");
		
	free(p);
	p=NULL;
}
