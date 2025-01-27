#include <stdio.h>
#include <math.h>
int main ()
{
	float val;
	float fval,cval;
	scanf("%f",&val);
	fval=floor(val);
	cval=ceil(val);
	printf("%f%f",fval,cval);
}