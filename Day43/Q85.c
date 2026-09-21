/*Q85: Reverse a string.
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter string : ");
    scanf("%s",str);

    int i=0;
    for(;str[i]!='\0';i++){
        
    }

    int j=i-1;
    for(int k=0;k<j;k++,j--){
        char temp=str[k];
        str[k]=str[j];
        str[j]=temp;
    }

    printf("Reversed string : ");
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }

    return 0;
}
