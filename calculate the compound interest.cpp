#include <stdio.h>
#include <math.h>
int main ()
{ 
float p,r,t,n,amt,ci;
scanf("%f%f%f%f",&p,&r,&t,&n);
amt=p*pow((1+r/(100*n)),n*t);
ci=amt-p;
printf("%f",ci);
}