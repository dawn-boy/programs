#include <stdio.h>

int main(){
		FILE *sFile, *dFile;
		int len;

		char arg[4][13] = {"Name","FavColor","class","PhoneNumber"};

		printf("How many Students: ");
		scanf(" %d",&len);

		char usrput[30];
		int argIndex=0,letterIndex=0;

		dFile = fopen("Students.details","w");

		for (int i=0; i<len; i++){
				argIndex = 0;
				for (int j=0; j<4; j++){
					printf("\nEnter Student %d %s: ",i+1,arg[argIndex]);
					scanf(" %s",&usrput);
					argIndex++;

					while (usrput[letterIndex] != '\0'){
						fputc(usrput[letterIndex],dFile);
						letterIndex++;		
					}
					if (j != 3)
							fputc(',',dFile);
					letterIndex = 0;
				}
				if (i != len-1)
						fputc('\n',dFile);
		}
		fclose(dFile);

		printf("\n\n");

		sFile = fopen("Students.details","r");

		char c;
		argIndex = 0;

		int run = 1;

		while (run){
				printf("%s: ",arg[argIndex++]);
				while ((c = fgetc(sFile))  != ',' && c != '\n'){
						if (c == EOF){
								run = 0;
								break;
						}
						printf("%c",c);
				}
				printf("\n");
				if (argIndex == 4){
						argIndex = 0;
						printf("\n");
				}
		}

		fclose(sFile);
}
