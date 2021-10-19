//Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.

#include<stdio.h>
void main()
{
int w;
double sf,ef;
double c = 0.0;
printf("Enter starting fahrenheit, ending fahenheit and step value\n");
scanf("%lf %lf %d",&sf, &ef, &w);
printf("Fahrenheit \t Celsius\n");
for(double i =sf; i <= ef;i = i + w)
{
c=(i-32)*(5.0/9.0);
printf("%.2lf\t\t\t%.2lf\n",i,c);
}
}
