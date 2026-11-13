/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.


Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main()
{
   FILE *fp;
 
   fp=fopen("data.txt","a");
    if(fp == NULL){
    printf("File could not be opened");
    return 1;
}
   char ch[100];
   printf("Enter user input: ");
   fgets(ch,100,stdin);
   fprintf(fp,"\n%s",ch);
   fclose(fp);
   printf("File updated successfully with appended text.");

    return 0;
}
