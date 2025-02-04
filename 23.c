#include <stdio.h>

void x(int *arr, int n);

int main() {
    int i, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];  
    x(arr, n);
    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void x(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("eliment no %d",i+1);
        scanf("%d",arr+i);
    }
}
