/*Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>

int main()
{
    int n;
    printf("enter number n : ");
    scanf("%d", &n);

    int i = 2;

    while(i <= n){

        int j = 2;
        int isPrime = 1;

        while(j < i){

            if(i % j == 0){
                isPrime = 0;
            }

            j++;
        }

        if(isPrime == 1){
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}
