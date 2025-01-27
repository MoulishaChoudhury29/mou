#include <stdio.h>
int main ()
{
	float c1,f1,c2,f2;
	scanf("%f%f",&c1,&f2);
	c2=(f2-32)*5/9;
	f1=(c1*9/5)+32;
	printf("%f%f",c2,f1);
}