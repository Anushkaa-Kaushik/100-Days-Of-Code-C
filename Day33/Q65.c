/*Q65: Search in a sorted array using binary search.
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int search;
    printf("Enter element to search: ");
    scanf("%d", &search);

    int low = 0;
    int high = n - 1;
    int found = 0;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == search)
        {
            printf("Found at index %d", mid);
            found = 1;
            break;
        }
        else if(arr[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("-1");
    }

    return 0;
}

