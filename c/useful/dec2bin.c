#include <stdio.h>



int main()
{
  int dec;
  int len = 1000;
  char bin[len];

  printf("Enter a decimal number: \n");
  scanf("%d", &dec);

  int i = 0;
  while (dec >= 2)
  {

    if(dec%2 == 0)
    {
      bin[i] = '0';
      dec/=2;

    }
    else
    {
      bin[i] = '1';
      dec/=2;

    }

    i++;
  }

  if(dec == 2)
  {
    bin[i] = '0';
  }
  else
  {
    bin[i] = '1';
  }

  i++;
  bin[i] = '\0';


  printf("%s\n", bin);


  char bin2[len];
  for(int j = 0; j<i ; j++)
  {
    bin2[j] = bin[i-j-1];
  }


printf("%s\n", bin2);







  return 0;
}
