// a program to know whether a year is leap year or not 
#include<stdio.h>
int main()
{
 int year;
 printf("enter year\n");
 scanf("%d",&year);
 if (year % 4==0)
{
 printf("A leap year");
}
 else
{
 printf("Not a leap year");
}

  return 0;
}