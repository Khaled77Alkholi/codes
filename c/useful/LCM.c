#include <stdio.h>







//################ NOT FINISHED YET #################
int main()
{
  int len, lcm, smallest_num, state = 0, last, greatest_num, islcm, ttmul = 1;
  printf("Enter how many numbers you  wanna enter: \n");
  scanf("%d", &len);

  int nums[len];
  for(int i = 0; i<len; i++)
  {
      printf("Enter the number #%d: ", i);
      scanf("%d", &nums[i]);
      printf("\n");
  }

  smallest_num = nums[0];

  for(int i = 0; i<len; i++)    //This loop is for finding the smallest number
  {
    if(nums[i]<smallest_num)
    {
      smallest_num = nums[i];
    }
  }


  greatest_num = nums[0];
  for(int i = 0; i<len; i++)
  {
    if(nums[i]>greatest_num)
    {
      greatest_num = nums[i];
    }
  }

  for(int i = 0; i<len; i++)    //This is for getting the gcm
  {
    ttmul*=nums[i];
  }

  printf("The smallest num should be %d, and the greatest one should be %d, total mul should be %d\n", smallest_num, greatest_num, ttmul);

  int try = ttmul/greatest_num;

  for(int i = 1; i<=try; i++)
  {
    for(int j = 0; j<len; j++)
    {
      if((greatest_num*i)%nums[j] != 0)
      {
        islcm = 0;
        break;
      }
      else
      {
        islcm = 1;
      }


    }
    if(islcm == 1)
    {
      lcm = greatest_num*i;
      break;

    }
  }

  printf("The lcm of those numebrs should be %d\n", lcm);
















  return 0;
}





/* this is for me(IGNORE)
  The lcm should be a one of the smallest number's multiples(products), so the program should first find the smallest_num.
  The lcm should be in the range of (first-multipl)-->(last multiple) of smallest_num, the first multiple should be the smallest_num*1,
  the the last one should be the the multiplication of all numbers


  */
