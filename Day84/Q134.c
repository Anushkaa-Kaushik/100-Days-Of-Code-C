/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    printf("Enter input : ");
    scanf("%99s",input);
   enum operations{SUCCESS,FAILURE,TIMEOUT
        };
        enum operations s;
       if(strcmp(input,"SUCCESS")==0)
       s= SUCCESS;
       else if(strcmp(input,"FAILURE")==0)
       s= FAILURE;
       else if(strcmp(input,"TIMEOUT")==0)
       s= TIMEOUT;
       else{
       printf("invalid input");
           
           return 1;
       }
       
   switch(s){
       case FAILURE: printf("Operation failed"); break;
       case SUCCESS: printf("Operation Succeeded"); break;
       case TIMEOUT: printf("Operation time out"); break;
       default : printf("invalid input");
   }    return 0;
}
