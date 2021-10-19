/*
Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
*/

#include<stdio.h>
void main()
{
int n, se = 0, so = 0;
scanf("%d", &n);
while(n != 0)
{
int r = n % 10;
if(r % 2 == 0)
se = se + r;
else
so = so + r;
n = n / 10;
}
printf("Even = %d \t Odd = %d", se, so);
}
