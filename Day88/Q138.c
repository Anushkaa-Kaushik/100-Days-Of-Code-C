/*Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

int main()
{
  enum Color{
      RED,YELLOW,GREEN
  };
  enum Color s;
   
    char names[3][10] = {"RED", "YELLOW", "GREEN"};
  int i;
  for(i=0;i<3;i++){
       s = i;
        printf("%s=%d\n", names[i], s);
  }
  

    return 0;
}
