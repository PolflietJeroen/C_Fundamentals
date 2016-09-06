#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
/*
int main ()
{
	printf("Max_int is size %i. \n", INT_MAX);
	printf("int_min is size %i. \n", INT_MIN);
	printf("long_max is size %ld. \n", LONG_MAX);
	printf("long_min is size %ld. \n", LONG_MIN);
	printf("dbl_max is size %f \n",DBL_MAX);
}
*/
/*
int main ()
{	
	int number, result;
	for (int i = 0; i <2; i++)
	{
		printf("Enter an integer: ");
		scanf("%d", &number);
		if (number > result)
		{
			result = number;
		}
	}
	printf("The max value was %d. \n", result);	
}
*/
int main ()
{
	int guess, min, result, max;
	int i = 0;
	int try = 0;
	printf("Enter MAX: ");
	scanf("%d", &max);
	printf("Enter MIN: ");
	scanf("%d", &min);
	
	result = min + rand()%(max-min);
	
	while (i == 0)
	{
		printf("Enter guess: ");
		scanf("%d", &guess);
		try++;
		if (guess == result)
		{
			i = 1;
		}
		
		
	}
	printf("The max value was %d. after %d tries \n", result, try);	
}
