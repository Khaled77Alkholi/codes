#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932384626433832795028841971693993

void angly(double angles[], double sides[]);
void sidy(double angles[], double sides[]);
double degToRad(double angle);
double radToDeg(double angle);


void main()
{
  int choice;
  double angles[3] = {0, 0, 0};
  double sides[3] = {0, 0, 0};

  printf("Sine Rule Calculator :)\n");
  printf("Enter your situation:\n1- 2 Angles and 1 side\n2- 2 sides and 1 angle that isn't between them\n");
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
        sidy(angles, sides);
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

double radToDeg(double angle)
{
  return angle*=(180/PI);
}


void angly(double angles[], double sides[])
{
  int numOfSide;
  double ratio;
  int x = 1;
  while(x)
  {
    printf("Enter the 1st angle:  ");
    scanf("%lf", &angles[0]);
    if(angles[0] >=180 || angles[0]<=0)
    {
      printf("Please enter a valid angle :)\n\n");
      x = 1;
      continue;
    }
    x = 0;
  }
  x = 1;
  while(x)
  {
    printf("Enter the 2nd angle:  ");
    scanf("%lf", &angles[1]);
    if(angles[1] >=180 || angles[1]<=0)
    {
      printf("Please enter a valid angle :)\n\n");
      x = 1;
      continue;
    }
    x = 0;
  }
  x = 1;
  angles[2] = (double) 180 - (angles[0] + angles[1]);

  for(int i = 0; i<3; i++)
  {
    angles[i] = degToRad(angles[i]);

  }
  while(x)
  {

    printf("\nTo which angles is the side oppositing?(1st, 2nd or 3rd):  ");
    scanf("%d", &numOfSide);
    if(numOfSide> 3 || numOfSide<1)
    {
      printf("Please enter a number from 1-3\n\n");

      continue;
    }
    x = 0;
  }
  x = 1;
  while(x)
  {
    printf("\nEnter the length of the side:  ");
    scanf("%lf", &sides[numOfSide -1]);
    if(sides[numOfSide-1] <=0)
    {
      printf("Please enter a valid lenght :_)\n\n");
      continue;
    }
    x = 0;
  }
  x = 1;
  /* for(int i = 0; i<3; i++)
  {
    if(sides[i] != 0)
    {
      ratio = (double) sides[i]/sin(angles[i]);
      printf("########################     side %d len %lf, angle %lf, sin(%lf) = %lf     ratio = %lf        ####################\n\n", i, sides[i],  angles[i],angles[i], sin(angles[i]), ratio);
      break;
    }
  } */        //That loop up here wasn't necesarry, Line 84 is less memory-consuming for the program.

  ratio = (double) sides[numOfSide-1]/sin(angles[numOfSide-1]);

  for(int i = 0; i<3; i++)
  {
    if(sides[i] == 0)
    {
      sides[i] = ratio*sin(angles[i]);
    }
  }

  for(int i = 0; i<3; i++)
  {
    angles[i] = radToDeg(angles[i]);
  }
}

void sidy(double angles[], double sides[])
{
  int numOfAngle;
  double ratio;
  printf("\nEnter the length of the 1st side: ");
  scanf("%lf", &sides[0]);
  printf("\nEnter the length of the 2st side: ");
  scanf("%lf", &sides[1]);
  printf("To which side is the angles opposite?(1st or 2nd side): ");
  scanf("%d", &numOfAngle);
  printf("Enter the angle: ");
  scanf("%lf", &angles[numOfAngle-1]);

  ratio = sides[numOfAngle-1]/sin(degToRad(angles[numOfAngle-1]));
  for(int i = 0; i<3; i++)
  {
    if(angles[i] == 0)
    {
      angles[i] = radToDeg(asin(sides[i]/ratio));
    }
  }
  angles[2] = 180 - (angles[0] + angles[1]);
  sides[2] = sin(degToRad(angles[2]))*ratio;







  }
