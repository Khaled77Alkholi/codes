#include <string.h>
#include <math.h>
#include <stdio.h>

void noSpace(char* arr);

int main(int argc, char* argv[]) {
	
	
		noSpace(argv[1]);
	





	return 0;
}







void noSpace(char* arr) {
	int sum = 0, dis = 0;
	for(int i = 0 ;i<strlen(arr); i++) {
		if(arr[i] == ' ') {
			continue;
		}
		if(arr[i] == '1') {
			sum+=1*pow(2, 7-dis);
		}
		dis++;
		if(dis%8 == 0) {
			printf("%c", sum);
			sum = 0;
			dis = 0;
		}
	}



}







/*
void withSpace(int argcc, char* arrs[]) {
	int sum;
	for(int i = 1; i<argcc; i++) {
		sum = 0;
		for(int j = 0; j<strlen(arrs[i]); j++) {
			if(arrs[i][j] == '1') {
			sum+=1*pow(2, 7-dis);
			}
			dis++;
			if(dis%8 == 0) {
				printf("%c", sum);
				sum = 0;
				dis = 0;
			}
		}
	}

}

*/
