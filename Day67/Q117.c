/*Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>

int main()
{
    int m, n, i, j, k;

    printf("Enter m and n : ");
    scanf("%d %d", &m, &n);

    int nums1[m], nums2[n], nums3[m+n];

    printf("Enter nums1[] : ");
    for(i=0; i<m; i++){
        scanf("%d", &nums1[i]);
    }

    printf("Enter nums2[] : ");
    for(j=0; j<n; j++){
        scanf("%d", &nums2[j]);
    }

    i=0;
    j=0;
    k=0;

    while(i<m && j<n){

        if(nums1[i] <= nums2[j]){
            nums3[k] = nums1[i];
            i++;
        }
        else{
            nums3[k] = nums2[j];
            j++;
        }

        k++;
    }

    while(i<m){
        nums3[k] = nums1[i];
        i++;
        k++;
    }

    while(j<n){
        nums3[k] = nums2[j];
        j++;
        k++;
    }

    printf("Merged array : ");
    for(k=0; k<m+n; k++){
        printf("%d ", nums3[k]);
    }

    return 0;
}
