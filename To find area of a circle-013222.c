// a program to find area of a circle 
#include<stdio.h>
int main()
{

 int area;
 int pI=22/7;
 int r;

 printf("enter r");
 scanf("%d",&r);

 area =pI * r * r;
 printf("area %d",area);

 return 0;
}