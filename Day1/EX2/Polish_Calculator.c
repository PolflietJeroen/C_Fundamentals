#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int main (int argc, char *argv[])
{
	int result = 0;
	int i = 2;
	if (argc < 2)
	{
		printf("Not enough . formula in the form of '+ 3 1 2 expected.\n");
	}
	else if (strlen(argv[1])!= 1)
	{
		printf("Operator incorrect.\n");
	}
	else if ((strcmp(argv[1],"-") == 0)&&(strcmp(argv[1],"+") == 0) )
	{
		printf("Incorrect operator. Only + and - supported.\n");
	}
	else
	{
		while (argc > i)
		{
			if (strcmp(argv[1],"-") == 0)
			{
				if (i == 2)
				{
					result = atoi(argv[i]);
				}
				else
				{
					result = result - atoi(argv[i]);
				}
			}
			else if (strcmp(argv[1],"+") == 0)
			{
				result = result + atoi(argv[i]);
			}
			i++;
		}
		printf("Result is: %i \n", result);
	}
}
*/
/*
int main (int argc, char *argv[])
{
	int result = 0;
	int i = 2;
	if (argc < 2)
	{
		printf("Not enough . formula in the form of '+ 3 1 2 expected.\n");
	}
	else if (strlen(argv[1])!= 1)
	{
		printf("Operator incorrect.\n");
	}
	else if ((strcmp(argv[1],"-") != 0)&&(strcmp(argv[1],"+") != 0)&&(strcmp(argv[1],"&") != 0)&&(strcmp(argv[1],"|") != 0)&&(strcmp(argv[1],"^") != 0)&&(strcmp(argv[1],"~") != 0))
	{
		printf("Incorrect operator. Only + and - supported.\n");
	}
	else
	{
		while (argc > i)
		{
			if (strcmp(argv[1],"-") == 0)
			{
				if (i == 2)
				{
					result = atoi(argv[i]);
				}
				else
				{
					result = result - atoi(argv[i]);
				}
			}
			else if (strcmp(argv[1],"+") == 0)
			{
				result = result + atoi(argv[i]);
			}
			else if (strcmp(argv[1],"&") == 0)
			{
				result = atoi(argv[2]) & atoi(argv[3]);
			}
			else if (strcmp(argv[1],"|") == 0)
			{
				result = atoi(argv[2]) | atoi(argv[3]);
			}
			else if (strcmp(argv[1],"^") == 0)
			{
				result = atoi(argv[2]) ^ atoi(argv[3]);
			}
			else if (strcmp(argv[1],"~") == 0)
			{
				result = ~ (atoi(argv[2]));
			}
			i++;
		}
		printf("Result is: %i \n", result);
	}
}
*/
int main (int argc, char *argv[])
{
	int result = 0;
	int i = 3;
	int D = 10;
	if (argc < 2)
	{
		printf("Not enough . formula in the form of '+ 3 1 2 expected.\n");
	}
	else if (strlen(argv[1])!= 1)
	{
		printf("Operator incorrect.\n");
	}
	else if ((strcmp(argv[1],"-") != 0)&&(strcmp(argv[1],"+") != 0)&&(strcmp(argv[1],"&") != 0)&&(strcmp(argv[1],"|") != 0)&&(strcmp(argv[1],"^") != 0)&&(strcmp(argv[1],"~") != 0))
	{
		printf("Incorrect operator. Only + and - supported.\n");
	}
	else
	{
		if (strcmp(argv[2],"H") == 0)
		{
			D = 16;
		}
		else if (strcmp(argv[2],"O") == 0)
		{
			D = 8;
		}
		while (argc > i)
		{
			if (strcmp(argv[1],"-") == 0)
			{
				if (i == 3)
				{
					result = strtol((argv[i]), NULL, D);
				}
				else
				{
					result = result - strtol((argv[i]), NULL, D);
				}
			}
			else if (strcmp(argv[1],"+") == 0)
			{
				result = result + strtol((argv[i]), NULL, D);
			}
			else if (strcmp(argv[1],"&") == 0)
			{
				result = strtol((argv[3]), NULL, D) & strtol((argv[4]), NULL, D);
			}
			else if (strcmp(argv[1],"|") == 0)
			{
				result = strtol((argv[3]), NULL, D) | strtol((argv[4]), NULL, D);
			}
			else if (strcmp(argv[1],"^") == 0)
			{
				result = strtol((argv[3]), NULL, D) ^ strtol((argv[4]), NULL, D);
			}
			else if (strcmp(argv[1],"~") == 0)
			{
				result = ~ (strtol((argv[3]), NULL, D));
			}
			i++;
		}
		printf("Result is: %i \n", result);
	}
}
