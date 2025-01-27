#include <stdio.h>
int main ()
{
	int l,b;
	scanf("%d%d",&l,&b);
	float area,peremeter;
	area=l*b;
	peremeter=2*(l+b);
	printf("%f%f",area,peremeter);
}