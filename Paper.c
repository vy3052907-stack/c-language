// paper of size A0 has dimensions 1189 mm X 841 mm.
//  Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides.
//  Write a program to calculate and print paper sizes A0,A1,A2,A3,A4,A4,A5,A6,A7,A8. 

#include<stdio.h>
int main(){
  int A0=1189,A0_1=841;
  int A1_a,A1_b,A2_a,A2_b,A3_a,A3_b,A4_a,A4_b,A5_a,A5_b,A6_a,A6_b,A7_a,A7_b,A8_a,A8_b;

  A1_a=A0_1;
  A1_b=A0_1/2;
  A2_a=A1_b;
  A2_b=A1_b/2;
  A3_a=A2_b;
  A3_b=A2_b/2;
  A4_a=A3_b;
  A4_b=A3_b/2;
  A5_a=A4_b;
  A5_b=A4_b/2;
  A6_a=A5_b;
  A6_b=A5_b/2;
  A7_a=A6_b;
  A7_b=A6_b/2;
  A8_a=A7_b;
  A8_b=A7_b/2;
printf("Dimensions of A0 is %d mm X %d mm\n",A0,A0_1);
printf("Dimensions of A0 is %d mm X %d mm\n",A1_a,A1_b);
printf("Dimensions of A0 is %d mm X %d mm\n",A2_a,A2_b);
printf("Dimensions of A0 is %d mm X %d mm\n",A3_a,A3_b);
printf("Dimensions of A0 is %d mm X %d mm\n",A4_a,A4_b);
printf("Dimensions of A0 is %d mm X %d mm\n",A5_a,A5_b);
printf("Dimensions of A0 is %d mm X %d mm\n",A6_a,A6_b);
printf("Dimensions of A0 is %d mm X %d mm\n",A7_a,A7_b);
printf("Dimensions of A0 is %d mm X %d mm\n",A8_a,A8_b);
    return 0;
}