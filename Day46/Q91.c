/*Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int main()
{
  int n=20;
  int j=0;
  char str[n];
  char strr[n];
  printf("Enter str :");
  scanf("%s", str);
  for(int i=0;str[i]!='\0';i++){
      if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'){
       strr[j]=str[i];
       j++;
       strr[j]='\0';
      }
  }for(j=0;strr[j]!='\0';j++){
      printf("%c",strr[j]);
  }
    return 0;
}
