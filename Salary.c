
// Q.1 Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary 
// and house rent allowance is 20%of basic salary.Write a programm to calculate his gross salary.


#include<stdio.h>
int main()
{
int salary;
float deduct,gross;
printf("Enter your salary: ");

scanf("%d",&salary);

deduct=(salary*40/100)+(salary*20/100);

gross=salary+deduct;

printf("Gross salary is %.2f",gross);

return 0;
}