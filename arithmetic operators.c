a program for arithmetic operation
#include <stdio.h>
int main()
{
	float p;
 float b;
	printf ("enter the first number /n");
	scanf ("%f" ,&p);
	printf ("enter the second number/n");
	scanf ("%f" ,&b);
	printf("a*b=%f/n",p*b);
	printf("a+b=%f/n",p+b);
	printf("a-b=%f/n",p-b);
	printf("a/b=%f/n",p/b);
	
	return 0;
}