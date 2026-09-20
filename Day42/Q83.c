/*Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main()
{
   int vowels=0;
   int consonants=0;
   int str[100];
   for(int i=0;str[i]!= '\0';i++){
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
       vowels++;
       else consonants++;
   }
printf("vowels = %d", vowels);
printf("consonants = %d", consonants);
    return 0;
}
