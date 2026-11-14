/*Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>

int main()
{
   int Vowels=0,Consonants=0;
   char file_name[100];
   printf("enter file_name: ");
   scanf("%s",file_name);
   
   FILE *fp;
fp = fopen(file_name, "w");
if(fp==NULL){
    printf("File not found!");
    return 1;

}
   char content[100];
   printf("Enter content: ");
 getchar();
   fgets(content,100,stdin);
   
  int ch;
  fprintf(fp,content);
  fclose(fp);
  fp = fopen(file_name, "r");
if(fp==NULL){
    printf("File not found!");
    return 1;

}
  ch=fgetc(fp);
  while(ch!=EOF){
      if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
          if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
              Vowels++;
          }else Consonants++;
      }
      
      
      
      ch=fgetc(fp);
      
  }fclose(fp);
  
  printf("Vowels: %d",Vowels);
  printf("\nConsonants: %d",Consonants);
   
    return 0;
}
