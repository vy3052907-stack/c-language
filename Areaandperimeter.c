//The length & breadth of rectangle and radius of a circle are input through the keyboard.
//Write a program to calculate the area&perimeter of the rectangle, and the area & circumference of the circle.

#include<stdio.h>
int main(){
float length,breadth,perimeter,area,circumference,radius;
printf("Enter the length of rectangle: ");
scanf("%f",&length);
printf("Enter the breadth of rectangle: ");
scanf("%f",&breadth);
printf("Enter the radius of the circle: ");
scanf("%f",&radius);

perimeter=2*(length+breadth);
area=length*breadth;
circumference=2*3.14*radius;

printf("Perimeter of rectangle is %.2f\nArea of the rectangle is %.2f\nCircumferenceof the circle is %.2f",perimeter,area,circumference);





    return 0;
}