#include <stdio.h>

int main(){
		float a, b;

		printf("Enter 1st Number: ");
		scanf(" %f",&a);

		do{
				printf("Enter 2nd Number: ");
				scanf(" %f",&b);
				printf("\n");
				if (b == 0)
						printf("2nd Number Cannot be 0!\n");
		}while(b == 0);

		printf("a/b = %.2f",a/b);

}
