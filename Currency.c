// consider a currency system in which there are notes of seven denominators namely 
// Rs.1,Rs.2,Rs.5,Rs.10,Rs.50,Rs.100.if a sum of Rs.n is entered through the keyboard,
// write a program to compute the smallest number of notes that will combine to give Rs.N.

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
int n1,n2,n5,n10,n50,n100;
n100=num/100;
num=num%100;
n50=num/50;
num=num%50;
n10=num/10;
num=num%10;
n5=num/5;
num=num%5;
n2=num/2;
num=num%2;
n1=num/1;
printf("%d notes of 100\n",n100);
printf("%d notes of 50\n",n50);
printf("%d notes of 10\n",n10);
printf("%d notes of 5\n",n5);
printf("%d notes of 2\n",n2);
printf("%d notes of 1\n",n1);

    return 0;
}