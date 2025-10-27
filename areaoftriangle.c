//if length of three sides of a triangle are input through the keyboard write a program to findthe area of the triangle.
//heron's formula=rootunders(s-a)(s-b)(s-c);
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the side A of triangle: ");
    scanf("%d",&a);
    printf("Enter the side B of triangle: ");
    scanf("%d",&b);
    printf("Enter the side C of triangle: ");
    scanf("%d",&c);
float perimeter,area,squareroot;
perimeter=(a+b+c)/2;
 area=perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c);

 squareroot=sqrt(area);

 printf("Area of the Triangle is %.2f",squareroot);
 

 return 0;
    
    
}