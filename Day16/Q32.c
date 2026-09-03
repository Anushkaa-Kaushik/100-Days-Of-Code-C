/*Q32: Write a program to check if a number is a palindrome.
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int original = n;         
    int reverse_number = 0;
    int digit;

    while(n > 0)
    {
        digit = n % 10;                      
        reverse_number = reverse_number * 10 + digit; 
        n = n / 10;                          
    }

    printf("Reverse Number = %d\n", reverse_number);

    if(original == reverse_number)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}

