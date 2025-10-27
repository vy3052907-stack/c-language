// If the total selling price of 15 items and the total profit earned on themis input through the keyboard.
// Write a program to find the cost price of one item.

#include<stdio.h>
int main()
{
float sp,profit,cp;
printf("Enter the selling price of the product: ");
scanf("%f",&sp);

printf("Enter the profit you earn: ");
scanf("%f",&profit);

cp=sp-profit;

printf("The cost price of the product is %.2f",cp);

    return 0;
}