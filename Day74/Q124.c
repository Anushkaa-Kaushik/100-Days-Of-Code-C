/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().


Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main()
{
    
    FILE*fp;
  
    fp=fopen("source.txt","w");
    fprintf(fp,"Learning C File Handling");
    fclose(fp);
    FILE *fp2;
   fp2=fopen("destination.txt","w");
    fprintf(fp2," ");
    fclose(fp2);
    fp=fopen("source.txt","r");
    fp2=fopen("destination.txt","w");
    int ch;
    ch=fgetc(fp);
   while(ch!=EOF){
      
   
    
    fputc(ch,fp2);
   ch= fgetc(fp);
    
   }fclose(fp);
   fclose(fp2);
    return 0;
}
