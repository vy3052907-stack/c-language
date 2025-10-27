// if a four digit number is input through the keyboard, 
// write a program to obtain the sum of the first and last digit of this number.

#include<stdio.h>
int main(){
    int num;
    printf("Enter the four digit no: ");
    scanf("%d",&num);

    int digit_1,digit_2,digit_3,digit_4,num_1,num_2,sum;

digit_1=num%10;
num_1=num/10;
digit_2=num_1%10;
num_2=num_1/10;
digit_3=num_2%10;
digit_4=num_2/10;
sum=digit_1+digit_4;
printf("The sum of the first and last digit is %d",sum);

return 0;

}