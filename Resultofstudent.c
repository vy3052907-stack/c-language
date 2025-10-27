// If the marks obtained by a student in five different subjects areinput through the keyboard, 
// write a program to find out the aggregate marks and percentage marks onbtained by the studen.
// Assume that the maximum marks that can be obtained by a student in each subject 100.


#include<stdio.h>
int main(){
float sub1,sub2,sub3,sub4,sub5,total;
float percentage;
printf("Enter the marks of the subject 1: ");
scanf("%f",&sub1);
printf("Enter the marks of the subject 2: ");
scanf("%f",&sub2);
printf("Enter the marks of the subject 3: ");
scanf("%f",&sub3);
printf("Enter the marks of the subject 4: ");
scanf("%f",&sub4);
printf("Enter the marks of the subject 5: ");
scanf("%f",&sub5);

total=sub1+sub2+sub3+sub4+sub5;
percentage=total/500*100;

printf("Total Marks of the student=%.2f\nPerecntage obtained by student=%.2f%\n",total,percentage);



    return 0;
}