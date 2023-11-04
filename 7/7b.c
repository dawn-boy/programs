#include <stdio.h>

int main(){
		int choice;
		
		printf("1. Square\n2. Circle\n3.Rectangle\n4.Triangle\n5.Parallelogram\n\n");

		printf("Pick One: ");
		scanf(" %d",&choice);

		float a,b,area;

		switch (choice){
				case 1: 
						printf("Enter Square's Side: ");
						scanf(" %f", &a);

						area = a * a;
						break;
				case 2: 
						printf("Enter Circle's radius: ");
						scanf(" %f", &a);

						area = 3.14 * a * a;
						break;
				case 3: 
						printf("Enter Rectangle's Height: ");
						scanf(" %f", &a);
						printf("Enter Rectangle's Breadth: ");
						scanf(" %f", &b);

						area = a * b;
						break;
				case 4: 
						printf("Enter Triangle's Height: ");
						scanf(" %f", &a);
						printf("Enter Triangle's Breadth: ");
						scanf(" %f", &b);

						area = (a * b)/2;
						break;
				case 5: 
						printf("Enter Parallelogram's Height: ");
						scanf(" %f", &a);
						printf("Enter Parallelogram's Breadth: ");
						scanf(" %f", &b);

						area = a * b;
						break;
		}

		printf("Area: %f",area);
}
