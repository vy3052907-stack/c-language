// Two number are input through the keyboard into two locations c and D.
// Write a program to interchange the contents of C and D.

#include<stdio.h>
int main(){

int c,d,a;
printf("Enter number c: ");
scanf("%d",&c);
printf("Enter number d: ");
scanf("%d",&d);

a=c;
c=d;
d=a;

printf("Content of C=%d\nContent of D=%d",c,d);


    return 0;

}