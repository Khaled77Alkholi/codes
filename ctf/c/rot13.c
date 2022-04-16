#include <string.h>
#include <stdio.h>
int main() {
	char word[999999];
	printf("text> ");
	fgets(word, 999999, stdin);
	for(int i = 0;i<strlen(word); i++) {
		if(word[i] >=97 && word[i] <=122) {
		
			if(word[i] >110) {
			
			word[i]-=13;
			
			} else {
			
			word[i]+=13;
			
			}
			
		} else if(word[i] >=65 && word[i] <=91){
			
			if(word[i] >78) {
			
			word[i]-=13;
			
			} else {
			
			word[i]+=13;
			
			}
		
		}
	}
	
	printf("\n%s\n", word);



	return 0;
}
