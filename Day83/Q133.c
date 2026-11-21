/*Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char month_input[100];
    printf("Enter month : ");
    scanf("%s",month_input);
    
   enum months{
       JAN=31, FEB=28,MARCH=31,APRIL=30,MAY,JUNE=30,JULY,AUG=31,SEPT=30,OCT,NOV=30,DEC
   };
   if(strcmp(month_input,"JAN")==0)
   printf("%d days",JAN);
   else if(strcmp(month_input,"FEB")==0)
   printf("28 or 29 days");
   else if(strcmp(month_input,"MARCH")==0)
   printf("%d days", MARCH);
    else if(strcmp(month_input,"APRIL")==0)
   printf("%d days",APRIL );
    else if(strcmp(month_input,"MAY")==0)
   printf("%d days",MAY );
    else if(strcmp(month_input,"JUNE")==0)
   printf("%d days",JUNE );
    else if(strcmp(month_input,"JULY")==0)
   printf("%d days",JULY );
    else if(strcmp(month_input,"AUG")==0)
   printf("%d days",AUG );
    else if(strcmp(month_input,"SEPT")==0)
   printf("%d days",SEPT );
    else if(strcmp(month_input,"OCT")==0)
   printf("%d days",OCT );
    else if(strcmp(month_input,"NOV")==0)
   printf("%d days",NOV );
   else if(strcmp(month_input, "DEC") == 0)
    printf("%d days", DEC);
   else  printf("Invalid match");
   
    return 0;
}
