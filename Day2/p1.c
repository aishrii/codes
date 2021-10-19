//Given a number N, print sum of all even numbers from 1 to N.
#include<stdio.h>
void main()
{
int i,n,s=0;
scanf("%d",&n);
printf("Your even numbers are ");
for(i=0;i<=n;i++)
{
if(i%2==0)
{printf("%d, ",i);
s=s+i;
}
}
printf("\n\nSum of even numbers is %d",s);
}
