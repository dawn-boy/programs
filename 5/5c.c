#include <stdio.h>

int main(){
		char string[30];
		char searchS, replaceS;

		printf("Enter a String: ");
		scanf(" %s",&string);

		printf("Enter a Search Character: ");
		scanf(" %c",&searchS);

		printf("Enter a Replace Character: ");
		scanf(" %c",&replaceS);

		int len = sizeof(string)/sizeof(string[0]);

		for (int i=0;i<len;i++){
				if(string[i] == searchS)
						string[i] = replaceS;
		}

		printf("The New String: %s",string);

}
