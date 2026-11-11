#include<stdio.h>
int main()
{
char op;float a,b;
printf("Enter expression:");
scanf("%f %c %f",&a,&op,&b);
switch(op)
{
case'+':printf("=%2f\n",a+b);