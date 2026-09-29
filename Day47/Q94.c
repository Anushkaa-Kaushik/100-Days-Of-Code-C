/*Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main()
{
    int n=100;
    char str[n];
    int count=0;
    int max=0;
    int start=0;
    int maxstart=0;

    printf("Enter sentence :");
    fgets(str,n,stdin);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' ' && str[i]!='\n'){
            count++;
        }
        else{
            if(count>max){
                max=count;
                maxstart=start;
            }
            count=0;
            start=i+1;
        }
    }

    if(count>max){
        max=count;
        maxstart=start;
    }

    for(int i=maxstart;i<maxstart+max;i++){
        printf("%c",str[i]);
    }

    return 0;
}
