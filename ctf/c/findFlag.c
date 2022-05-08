#include <stdio.h>
#include <string.h>


int main(int argc, char* argv[]) {

	char output[999999];
	fgets(output, 999999, stdin);
	int f = 0, j = 0;
	char flag[999999];
	for(int i = 0 ;i<strlen(output); i++) {
		if(f == 0 && output[i] == 'f' && output[i+1] == 'l' && output[i+2] == 'a' && output[i+3] == 'g') {
			f = 1;
			i+=4;
		
		} 
		if(f == 1) {
			flag[j] = output[i];
			j++;
		}
	}
	printf("%s\n", flag);
	
	
	
	
	
	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	
	## The following code was made so that the user inputs the arguments AFTER executing the program like this:
	``` ./findFlag "text with flag" ```
	
	Then I wanted it to be able to read the flag if the user types this:
	``` echo "text with flag" | ./findFlag ``` So that it prints out "text with the flag".
	
	## I've done a bit of research to find out that when piping(using '|' operator), we actually output to stdin.
	So basically, the c program just reads the input from stdin, not command line arguments. INTERESTING.
	
	
	char flag[9999] = {0};
	int f = 0, j = 0;
	for(int i = 0; i<strlen(argv[1]); i++) {
		if(f == 0) {
			if(argv[1][i] == 'f' && argv[1][i+1] == 'l' && argv[1][i+2] == 'a' && argv[1][i+3] == 'g') {
			f = 1;
			i+=4;
			}
		} else {
			flag[j] = argv[1][i];
			j++;
		}

	}
	
	printf("%s\n", flag);


	*/

	
}
