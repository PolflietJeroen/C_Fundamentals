#include <stdio.h>
#include <stdlib.h>

/* //EX1
#define FILE_LINE __FILE__ ":" SYM_TO_STR(__LINE__)
#define SYM_TO_STR(sym) STRINGIFY(sym)
#define STRINGIFY(sym) #sym

int main()
{
	printf("%s\n",FILE_LINE);
}
*/
/*
#define MINIMUM2(x,y) (((x)<(y)) ? (x) : (y))	
#define MINIMUM3(x,y,z) (((MINIMUM2(x,y))<(z)) ? (MINIMUM2(x,y)) : (z)) 

int main ()
{
	int a = 5;
	int b = 6;
	int d = 2;
	int c = MINIMUM2(a,b);
	printf("%d\n",c);
	int e = MINIMUM3(a,b,d);
	printf("%d\n",d);
	
}
*/

#ifndef LOGLEVEL
#error you forgot LOGLEVEL
#endif

#if LOGLEVEL >= 3
#define LogDebug
#if LOGLEVEL >= 2
#define LogTrace
#if LOGLEVEL >= 1
#define LogError
#endif
#endif
#endif



