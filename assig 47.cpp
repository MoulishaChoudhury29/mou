#include<stdio.h>
int main()
{
	int arr[100];
	int n,i,k;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n/2;i++){
		k=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=k;
	}
	printf("Reversed array:");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}