// if a five digit number is input the keyboard, 
// write a program to calculate the sum of its digits.
#include<stdio.h>
int main()
{
int num;
printf("Enter the five didgit number: ");
scanf("%d",&num);

int digit_1,digit_2,digit_3,digit_4, digit_5,num_1,num_2,num_3,sum;

digit_1=num%10;
num_1=num/10;
digit_2=num_1%10;
num_2=num_1/10;
digit_3=num_2%10;
num_3=num_2/10;
digit_4=num_3%10;
digit_5=num_3/10;

sum=digit_1+digit_2+digit_3+digit_4+digit_5;

printf("Sum of the digit of the number is %d",sum);
    return 0;
}