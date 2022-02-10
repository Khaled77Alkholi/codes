#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932384626433832795028841971693993

void angly(double angles[], double sides[]);

double degToRad(double angle);


void main()
{
  int choice;
  double angles[3] = {0, 0, 0};
  double sides[3] = {0, 0, 0};


  printf("Enter your situation:\n");
  scanf("%d", &choice);
  int x = 1;
  while(x)
  {

    switch(choice)
    {
      case 1:
        angly(angles, sides);
        x = 0;
        break;
      case 2:
        //sidy(angles, sides);
        x = 0;
        break;
      default:
        printf("Enter a valid number (:\n");
    }


  }

  for(int i = 0; i<3; i++)
  {
    printf("%lf\n%lf\n\n\n", angles[i], sides[i]);
  }

}


double degToRad(double angle)
{
  return angle*=(PI/180);
}


void angly(double angles[], double sides[])
{
  int numOfSide;
  double ratio;
  printf("Enter the 1st angle:  ");
  scanf("%lf", &angles[0]);
  printf("Enter the 2nd angle:  ");
  scanf("%lf", &angles[1]);
  angles[2] = (double) 180 - (angles[0] + angles[1]);

  for(int i = 0; i<3; i++)
  {
    angles[i] = degToRad(angles[i]);

  }
  printf("To which angles is the side oppositing?(1st, 2nd or 3rd):  ");
  scanf("%d", &numOfSide);
  printf("Enter the length of the side:  ");
  scanf("%lf", &sides[numOfSide -1]);

  for(int i = 0; i<3; i++)
  {
    if(sides[i] != 0)
    {
      ratio = (double) sides[i]/sin(angles[i]);
      printf("########################     side %d len %lf, angle %lf, sin(%lf) = %lf     ratio = %lf        ####################\n\n", i, sides[i],  angles[i],angles[i], sin(angles[i]), ratio);
      break;
    }
  }

  for(int i = 0; i<3; i++)
  {
    if(sides[i] == 0)
    {
      sides[i] = ratio*sin(angles[i]);
    }
  }

}
