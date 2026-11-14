/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>

int main()
{
    
    FILE *fp;
    fp=fopen("input.txt","w");
    if(fp==NULL){
        printf("File not found!");
        return 1;
    } 
    fprintf(fp,"Hello World\nC programming");
     fclose(fp);
    
   
    FILE *fp2;
    fp2=fopen("output.txt","w");
    if(fp2==NULL){
        printf("File not found!");
        return 1;
    } fprintf(fp2,"");
    fclose(fp2);
    
     fp=fopen("input.txt","r");
    if(fp==NULL){
        printf("File not found!");
        return 1;
    }  
     fp2=fopen("output.txt","w");
    if(fp2==NULL){
        printf("File not found!");
        return 1;
    } 
    int ch;
     ch=fgetc(fp);
     while(ch!=EOF){
         if(ch>='a'&&ch<='z'){
             ch=ch-32;
             
         }
       ch=fgetc(fp);
         fputc(ch,fp2);
         
    }fclose(fp);
    fclose(fp2);
    return 0;
}
