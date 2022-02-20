#include <stdio.h>
#include <string.h>

void toUpperCase(char string[]);
void toLowerCase(char string[]);





//I wanna make a code that does what toUpperCase() and toLowerCase methods in java do. Which means converting strings to lower or upper case. My notes are down below.

int main() {
  printf("Enter the string that you wanna convert: \n");
  char string[9999];
  gets(string);
  int len = strlen(string);
  printf("%s\n", string);
  printf("Select the function: \n");

  int choice;


  do {

    printf("1- toUpperCase.\n2- toLowerCase.\n");
    scanf("%d", &choice);
    if(choice == 1)  {
      toUpperCase(string);
      break;
    }
    else if(choice == 2)  {
      toLowerCase(string);
      break;
    }
    else  {
      printf("Please enter a valid value\n\n\n");
    }




  }while(1);


  printf("%s\n", string);







  return 0;
}




void toUpperCase(char string[]) {

  for(int i = 0; i<strlen(string); i++) {

    if(string[i]>=97 && string[i]<=122) {
      string[i] = string[i] - 32;

    }

  }



}

void toLowerCase(char string[]) {
  for(int i = 0; i<strlen(string); i++) {

    if(string[i]>=65 && string[i]<=90) {
      string[i] = string[i] + 32;

    }
}

}





























/* Ok, so every character in english has its value in ASCII code. A is 65, a is 97. So, the difference between the lower and upper case character is 22. So the program should check every character
in the string and first look if it's an english character(int value of tha char is between 65 to 90 and 97 to 122) if not, then ignore it. And if it's an english character, look if it's an upper or lower
case and then act according to the function's purpose.
*/


// I just realized that I haven't even looked the gets() function up yet. I should do it now because the scanf() function stops after the first space.
// lool it's so much simpler than I planned.
