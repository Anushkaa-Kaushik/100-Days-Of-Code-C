/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char input_operation[100];
    printf("Enter input_operation");
    scanf("%s",input_operation);
   int a,b;
   printf("Enter a and b : ");
   scanf("%d %d", &a,&b);
   enum operations{
       ADD,SUBTRACT,MULTIPLY
   };
   enum operations s;
   if(strcmp(input_operation,"ADD")==0)
   s= ADD;
   else if(strcmp(input_operation,"MULTIPLY")==0)
   s= MULTIPLY;
   else if(strcmp(input_operation,"SUBTRACT")==0)
   s= SUBTRACT;
   else printf("invalid input!");
    int result;
   switch(s){
       case ADD: 
       result=a+b;
       printf("%d",result);
       break;
       case SUBTRACT:
       result=a-b;
       
        printf("%d",result);
        break;
       case MULTIPLY:
       result= a*b;
       break;
        printf("%d",result);
   }
   
    return 0;
}
