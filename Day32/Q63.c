// Online C compiler to run C program online
/*Q63: Merge two arrays.
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/
#include <stdio.h>

int main() {
   int n,m;
    printf("enter m,n: ");
    scanf("%d, %d ",&n,&m);
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        printf("enter arr[i] : ");
        scanf("%d",&arr1[i]);
    
    } for(int i=0;i<m;i++){
        printf("enter arr[i] : ");
        scanf("%d",&arr2[i]);
    
    }int arr[m+n];
    for(int i =0;i<n;i++){
    arr[i]=arr1[i];
    }for (int i =n;i<m+n;i++){
        arr[i]=arr2[i-n];
    }for(int i=0;i<m+n;i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}
