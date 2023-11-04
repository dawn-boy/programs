#include <stdio.h>

int main(){
		int len,sum;

		printf("Enter total number of Elements: ");
		scanf(" %d",&len);

		int arr[len];

		for (int i=0;i<len;i++){
				printf("Enter Element %d: ",i+1);
				scanf(" %d",&arr[i]);
		}

		printf("The Elements are: ");

		int *ptr;

		for (int i=0;i<len;i++){
				ptr = &arr[i];
				printf("%d ",*ptr);
				sum += *ptr;
		}

		ptr = &sum;

		printf("\nThe Sum: %d",*ptr);
}
