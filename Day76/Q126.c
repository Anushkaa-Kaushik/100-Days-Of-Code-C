/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include <stdio.h>

int main()
{
   
   FILE*fp;
   char ch[100];
   printf("Take user input : ");
   scanf("%s",ch);
   fp=fopen(ch,"r");
   if(fp==NULL){
       printf("File does not exist!");
       return 1;
   }
     fgets(ch,100,fp);
   printf("%s",ch);
   fclose(fp);
   printf("File opened successfully.");
    return 0;
}
