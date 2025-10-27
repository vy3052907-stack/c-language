// Temperature of city in Fahrenheit degree is input through the keyboard.
// Write a program to convert this temperature into Centigrade degree.
// formula used
// f=9c/5+32

#include<stdio.h>
int main(){
    float temp,centigrade;
    printf("Enter the temperature of city in fahrenheit: ");
    scanf("%f",&temp);
    centigrade=(temp-32)*5/9;

    printf("Temperature of city in centigarde is %.2f",centigrade);



    return 0;
}