/*Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>

int main()
{
    int count = 0;
    int n=20;
    char str[20];
    printf("Enter str [20] : ");

    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&& str[i]<='z')
       str[i]=str[i]-('a'-'A');
       else if(str[i]>='A'&&str[i]<='Z')
       str[i]=str[i]+('a'-'A');
       printf("%c",str[i]);
    }

    return 0;
}
