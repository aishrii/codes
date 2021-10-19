/*
A
BB
CCC
*/

#include<stdio.h>
void main()
{
int i,j,k;
for(i=1;i<=3;i++)
{
    k=i;
    for(j=1;j<=i;j++)
    {
    printf("%c",(char)(k+64));
}
printf("\n");
}
}
