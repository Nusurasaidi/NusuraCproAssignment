// a program for marks and grading
#include<stdio.h>
int main()
{
int marks,grade;
printf("enter marks");
scanf("%d",&marks);
if(marks>=70 && marks<=100)
{
   printf("A grade");
}
else if (marks>=60 && marks<=69)
 {
   printf("B grade");
 }
else if (marks>=50 && marks<=59 )
{
   printf("C grade");
}
else if(marks>=40 && marks<=49)
{
   printf("D grade");
}
else if (marks>=0 && marks<=39)
{
   printf("Fail");
}
else
{
   printf("Syntax error");
}
  return 0;
}