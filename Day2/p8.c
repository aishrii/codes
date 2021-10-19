/*
A
BC
CDE
DEFG
*/

#include<stdio.h>
void main()
{
char i,j,k=0;
for(i=1;i<=4;i++)
{
    k=i;
    for(j=1;j<=i;j++,k++)
    {
    printf("%c",(k+64));

}
printf("\n");
}
}
