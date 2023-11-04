#include <stdio.h>

int main(){
		int len;

		printf("Students Count: ");
		scanf(" %d",&len);

		int marks[len];

		for (int i=0; i<len; i++){
				printf("Enter the Mark of Student %d: ",i+1);
				scanf(" %d",&marks[i]);
		}

		printf("1. Below 30 (fail)\n2. 30-70 (pass)\n3. 70-80 (merit)\n4. 80-100 (distinction)\n");

		for(int i=0; i<len; i++){
				int mark = marks[i];
				
				if (mark > 0 && mark <= 30)
						printf("Student %d - Fail",i);
				else if (mark > 30 && mark <= 70)
						printf("Student %d - Pass",i);
				else if (mark > 70 && mark <= 80)
						printf("Student %d - Merit",i);
				else if (mark > 80 && mark <= 100)
						printf("Student %d - Distinction",i);
				else
						printf("Invalid!");
				printf("\n");
		}
}
