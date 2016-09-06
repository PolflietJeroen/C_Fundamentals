#include <stdio.h>
#include <string.h>

void upper_string(char s[]) 
{
   int c = 0;
 
   while (s[c] != '\0') 
   {
      if (s[c] >= 'a' && s[c] <= 'z') 
      {
         s[c] = s[c] - 32;
      }
      c++;
   }
}


int main (int argc, char *argv[])
{
	int i = 0;
	while(i < argc)
	{
		upper_string(argv[i]);
		printf("%s \t has %zu length.\n", argv[i], strlen(argv[i]));
		i++;
	}
}


