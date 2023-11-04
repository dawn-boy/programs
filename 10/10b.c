#include <stdio.h>
#include <string.h>

int main(){
		FILE *sFile;
		char c;
		int wordCount=1,letterCount=0,maxLetterCount=0;
		char word[30],longestWord[30];

		sFile = fopen("wordFile","r");
	
		do {
				c = fgetc(sFile);
				letterCount += 1;
				word[letterCount-1] = c;
				if (c == ' '){
						wordCount += 1;
						if (letterCount > maxLetterCount){
								strcpy(longestWord,"");
								strcpy(longestWord,word);
								maxLetterCount = letterCount;
						}
						letterCount = 0;
						strcpy(word,"");
				}
		}while (c != EOF);

		printf("Total Words: %d",wordCount);
		printf("\nLongest Word: %s",longestWord);
		
		fclose(sFile);
}
