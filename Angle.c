//Write a program to receive value of an angle in degrees and check whether sum of sqaure of sine and cosine of this angle is equal to 1
#include<stdio.h>
#include<math.h>
int main(){
    float degree,radian,value;
    printf("Enter the value in degree: ");
    scanf("%f",&degree);
   const float pi=3.14;

radian=degree*pi/180;
value=sin(radian)*sin(radian)+cos(radian)*cos(radian);

if(value==1){
    printf("statements satisfied");
}
else{
    printf("value not equal to 1");
}
return 0;




}