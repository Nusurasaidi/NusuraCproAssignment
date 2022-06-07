//function to calculate the cube of a given number
#include<stdio.h>
float cube (float num);//function prototype

int main()

{
float input, output;
printf("Enter num:");
scanf("%f",& input);

output=cube(input); //calling function
printf("\n the cube of %.2f is %.2f", input , output);

return 0;

}
float cube (float num) // function definition
{
float num_cubed;
num_cubed=num*num*num;
return num_cubed;

}