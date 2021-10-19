/*
1
23
345
4567
*/

#include<stdio.h>
void main()
{
int n,i,j,k=1;
printf("enter no.");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
k=i;
for(j=1;j<=i;j++)
printf("%d",k++);
printf("\n");
}
}
