//Lets code it--Shahid
#include <stdio.h>

void modifyArray(int *arr, int n) {
    
    for (int i = 0; i < n; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int n;
    scanf("%d", &n);  
    
    
    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }

    int arr[n];  
    
  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    printf("Original array:");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }

    
    modifyArray(arr, n);

    
    printf("\nModified array:");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }

    return 0;
}
