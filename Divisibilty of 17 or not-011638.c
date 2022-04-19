// a program to know whether a number is divisible by 17 or not
#include<stdio.h>
int main()
{
 int num;
 printf("enter num\n");
 scanf("%d",&num);
 if (num % 17==0)
{
 printf("the number is divisible by 17");
}
 else
{
 printf("the number is not divisible by 17");
}

  return 0;
}