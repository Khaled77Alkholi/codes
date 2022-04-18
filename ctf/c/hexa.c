#include <stdio.h>
#include <string.h>
int main(int argc, char* argl[]) {
	int sum ;
	for(int i = 1; i<argc; i++) {
		for(int j = 0; j<strlen(argl[i]); j++) {
			if(j%2 == 0 ) {
			
			sum = 0;
			}
			if(j%2!=0) {
				switch(argl[i][j]) {
					case 'a':
					case 'A':
						sum+=10;
						break;
					case 'b':
					case 'B':
						sum+=11;
						break;
					case 'c':
					case 'C':
						sum+=12;
						break;
					case 'd':
					case 'D':
						sum+=13;
						break;
					case 'e':
					case 'E':
						sum+=14;
						break;
					case 'f':
					case 'F':
						sum+=15;
						break;
					case '1':
						sum+=1;
						break;
					case '2':
						sum+=2;
						break;
					case '3':
						sum+=3;
						break;
					case '4':
						sum+=4;
						break;
					case '5':
						sum+=5;
						break;
					case '6':
						sum+=6;
						break;
					case '7':
						sum+=7;
						break;
					case '8':
						sum+=8;
						break;
					case '9':
						sum+=9;
						break;
					default:
						continue;
				}
			} else {
				switch(argl[i][j]) {
					case 'a':
					case 'A':
						sum+=10*16;
						break;
					case 'b':
					case 'B':
						sum+=11*16;
						break;
					case 'c':
					case 'C':
						sum+=12*16;
						break;
					case 'd':
					case 'D':
						sum+=13*16;
						break;
					case 'e':
					case 'E':
						sum+=14*16;
						break;
					case 'f':
					case 'F':
						sum+=15*16;
						break;
					case '1':
						sum+=1*16;
						break;
					case '2':
						sum+=2*16;
						break;
					case '3':
						sum+=3*16;
						break;
					case '4':
						sum+=4*16;
						break;
					case '5':
						sum+=5*16;
						break;
					case '6':
						sum+=6*16;
						break;
					case '7':
						sum+=7*16;
						break;
					case '8':
						sum+=8*16;
						break;
					case '9':
						sum+=9*16;
						break;
					default:
						continue;
				}
			}
			
			
		}
		printf("%c", sum);
		
	}
	
	
	return 0;
}
