#include <stdio.h>


/* this program is for getting the greatest common factor for a group of numbers */


int main()
{
  int len, least_num, gcd = 1, state, last;
  printf("Enter how many numbers you wanna get the GCF from :\n");
  scanf("%d", &len);
  int arr[len];

  for(int i =0; i<len; i++)   //This loop lets the user enter the numbers
  {
    printf("Enter number #%d :", i);
    scanf("%d", &arr[i]);
    printf("\n");

  }

  printf("So the numbers are:");
  for(int i = 0; i <len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  least_num = arr[0];



  for(int i = 0; i<len; i++)  //This loop gets the least number from those numbers.
  {
    if(i == 0)
    {

      continue;

    }

    if(arr[i] < arr[i-1])
    {
      least_num = arr[i];
    }
  }

  for(int i = 1; i<=least_num; i++)
  {
    for(int j = 0; j<len; j++)
    {
      if(arr[j] % i ==0)
      {
        gcd = i;
        state = 1;
      }

      else
      {
        state = 0;
        break;
      }

    }
    if(state ==1 )
    {
      last = gcd;
    }

  }

  printf("%d\n", last);





  return 0;
}







/* comments for me (ignore)
  first, let it get the least number, cuz the greatest common factor at maximum be the least number of the numbers
  second, let it start factors from 1, see if all numbers can be divided by those factors. The last dividable factor should be the gcd :) hope that works
  */
