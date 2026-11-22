/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>

int main()
{
  char input[100];
  printf("Enter user input : ");
  scanf("%s",input);
  enum user_type{
      ADMIN,USER,GUEST
  }; 
  enum user_type s;
  if(strcmp(input,"ADMIN")==0)
  s= ADMIN;
else if(strcmp(input,"USER")==0)
  s= USER;
  else if(strcmp(input,"GUEST")==0)
  s= GUEST;
  else printf("Invalid Input!");
  switch(s){
      case ADMIN:
      printf("Welcome Admin!");
      break;
      case USER:
      printf("Welcome User!");
      break;
      case GUEST:
      printf("Welcome Guest!");
      break;
  }
  

    return 0;
}
