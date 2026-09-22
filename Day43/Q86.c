/*Q86: Check if a string is a palindrome.
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
char str[100];
    printf("Enter string : ");
    scanf("%s",str);
int string = str[100];
    int i=0;
    for(;str[i]!='\0';i++){
        
    }

    int j=i-1;
    for(int k=0;k<j;k++,j--){
        char temp=str[k];
        str[k]=str[j];
        str[j]=temp;
    }

    int Reversed_string ;
    for(int i=0;str[i]!='\0';i++){
        Reversed_string=str[i];
    }
if(Reversed_string==string)
printf("Palindrom");
    else printf("Not Palindrom");
    return 0;
}
