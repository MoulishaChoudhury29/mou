#include <stdio.h>
int main ()
 {
 int i,j,k;
 for(i=1;i<=3;i++)
{
	for(k=3;k>i;k--)
	{
		printf(" ");
	}
	for (j=1;j<=i;j++)
	{
		printf("* ");
	}
	printf("\n");
}
for(int m=2;m>=1;m--)
{
	for(int n=2; n>=m;n--)
	{
		printf(" ");
	}
	for(int o=1;o<=m;o++)
	{
		printf("* ");
	}
	printf("\n");
}
}

