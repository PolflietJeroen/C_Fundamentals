#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int power (int base, int exp)
{
	int temp = 1;
	        while(exp) 
		{   
			//temp = temp*remainder; 
			exp--; 
		}	
		return temp;
}

int main(int argc, char *argv[])
{
    int number, originalNumber, remainder, result = 0, n = 0 ;
	number = atoi(argv[1]);

     originalNumber = number;
    
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
