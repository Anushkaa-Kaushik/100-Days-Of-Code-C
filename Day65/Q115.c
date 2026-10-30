/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".


Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>
int main()
{
  char s[100], t[100];
  printf("Enter s t : ");
  scanf("%s %s",s,t);
  int i,j,n,m;
  n=strlen(s), m=strlen(t);
  if(n==m){
  for(i=0;i<n-1;i++){
      for(j=0;j<n-i-1;j++){
          if(s[j]>s[j+1]){
              int c=s[j];
              s[j]=s[j+1];
              s[j+1]=c;
          }
      }
  } 
  for(i=0;i<m-1;i++){
      for(j=0;j<m-i-1;j++){
          if(t[j]>t[j+1]){
              int c=t[j];
              t[j]=t[j+1];
              t[j+1]=c;
          }
      }
  } int k;
 k= strcmp(s,t);
 if(k==0)
 printf("Anagram");
 else printf("Not Anagram");
  
  }else printf("Not Anagram");
    return 0;
}
