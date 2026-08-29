/*Q30: Write a program to reverse a given number.
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

int main() {
    int n;
    printf("enter n = ");
    scanf("%d", &n);

    int reversed_num = 0;

    while (n > 0) {
        int last_digit = n % 10;
        reversed_num = (reversed_num * 10) + last_digit;
        n = n / 10;
    }

    printf("%d\n", reversed_num);
    return 0;
}
