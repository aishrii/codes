/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1
*/

#include <stdio.h>
#include<math.h>
int main()
{
    float x,n,power;
    printf("ENTER x\n");
    scanf("%f",&x);
    printf("ENTER n\n");
    scanf("%f",&n);
    power=pow(x,n);
    printf("x^n is %.2f",power);
}
