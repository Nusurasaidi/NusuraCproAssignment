#include<stdio.h>

int main()
{
    int price;
    int quantity;
    int amount;
    int discount;
    printf("Enter quantity and price");
    scanf("%d %d",& quantity, price);
   
    
    amount=quantity * price;
    if(amount>5000)
    {
    
    discount=amount*0.05;
    amount=amount-discount;
   }
    {
    printf("%d",amount);
     }
    
    return 0;
}