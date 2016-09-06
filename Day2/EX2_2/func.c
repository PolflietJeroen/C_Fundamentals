#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
void * safe_malloc(size_t size);

int main(){
	void * p = safe_malloc(80000000000000000);
	printf("wa is dees: %p\n",p);
}

void * safe_malloc(size_t size){
	void * ptr = ptr = malloc(size);
	if (ptr == NULL)
	{
		printf("pointer is null\n");
		exit(1);
	}
	return ptr;
}*
*/
/*
void func(int c);
int main(){
	int x = 5;
	func(x);
	printf("%d\n",x);
}
void func(int c){
	c = 4;
	return;
}
*/
/*
int func(int c);
int main(){
	int x = 5;
	x = func(x);
	printf("%d\n",x);
}
int func(int c){
	c = 4;
	return c;
}
*/

double KtC(double K);
double CtK(double C);
double FtC(double F);
double CtF(double C);

int main(int argc, char * argv[]){
	double result = 0;
	if (argc == 3){
		if (strcmp(argv[1],"k2c") == 0)
		{
			result = KtC(*argv[2]);
		}	
		else if (strcmp(argv[1],"k2f") == 0){
		
			result = KtC(CtF(*argv[2]));	
		}
		else if (strcmp(argv[1],"f2c") == 0){
			
			result = FtC(*argv[2]);
		}
		else if (strcmp(argv[1],"f2k") == 0){
			
			result = FtC(CtK(*argv[2]));
		}
		else if (strcmp(argv[1],"c2f") == 0){
			
			result = CtF(*argv[2]);
		}
		else if (strcmp(argv[1],"c2k") == 0){
		
			result = CtK(*argv[2]);
		}
		else{
			printf("wrong input blah!");
		}
	}
	else{
		printf("wrong input!");
	}
	printf("%f\n",result);
}
double KtC(double K){
	double C = K - 273.15;
	return C;
}
double CtK(double C){
	double K = C + 273.15;
	return K;
}
double FtC(double F){
	double C = F - 32;
	C = C * 5 / 9;
	return C;
}
double CtF(double C){
	C = C * 9 / 5;
	double F = C + 32;
	return F;
}

