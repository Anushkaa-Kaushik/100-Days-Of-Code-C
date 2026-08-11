/*Q3 Write a program to calculate the area and perimeter of a rectangle given its length and breadth*/

#include <stdio.h>

int main()
{
int length;
scanf("%d",&length);
int breadth;
scanf("%d",&breadth);
printf("area= %d, ",length*breadth);
printf("perimeter = %d", 2*length+2*breadth);

}
