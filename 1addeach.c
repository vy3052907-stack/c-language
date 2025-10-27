//If a five digit number is input through the keyboard,
//write a program to print a new number by adding one to each of its digits.
//for example if the number that is input is 12391,
//then the output should be displayed as 23502.
#include<stdio.h>
int main()
{
    int num;
printf("Enter the five didgit number: ");
scanf("%d",&num);

int digit_1,digit_2,digit_3,digit_4, digit_5,num_1,num_2,num_3,reverse;

digit_1=num%10;
num_1=num/10;
digit_2=num_1%10;
num_2=num_1/10;
digit_3=num_2%10;
num_3=num_2/10;
digit_4=num_3%10;
digit_5=num_3/10;
reverse=(digit_5+1)*10000+(digit_4+1)*1000+(digit_3+1)*100+(digit_2+1)*10+digit_1+1;

printf("Adding 1 in each digit result will be %d",reverse);
    return 0;
}