// The distance between two cities in km is input through the keyboard.
// Write a program to convert and print this distance in meters,feet,inches and centimeter.

#include<stdio.h>
int main()
{
    int distance,meters,centimeter;
    float inch,feet;
    printf("Enter the distance between two cities: ");
    scanf("%d",&distance);
    meters=distance*1000;
    centimeter=meters*100;
    feet=centimeter/30.48;
    inch=feet*12;

    printf("meters=%d\ncentimeters=%d\nfeet=%.2f\ninch=%.2f",meters,centimeter,feet,inch);
    return 0;

}