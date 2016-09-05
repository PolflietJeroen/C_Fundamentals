#include <stdio.h>

/*
int main (int argc, char *argv[])
{
	printf("%s \n", argv[0]);
}

*/
/*
int main (int argc, char *argv[])
{
	int i = 0;
	while(i < argc)
	{
		printf("%s \n", argv[i]);
		i++;
	}
}
*/
/*
int main (int argc, char *argv[])
{
	int i = 1;
	while(i < argc)
	{
		printf("%s \n", argv[i]);
		i++;
	}
}
*/
int main (int argc, char *argv[])
{
	int i = 1;
	while(i < argc)
	{
		printf("%s \n", argv[argc-i]);
		i++;
	}
}

