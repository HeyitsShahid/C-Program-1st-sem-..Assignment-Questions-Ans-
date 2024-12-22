//Lets code it--Shahid
#include <stdio.h>

int main() {
    
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
   
    int n;
    scanf("%d", &n);

   
    int arr[n];

   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Days in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%s", days[arr[i]]);
        if (i > 0) {
            printf(" ");  
        }
    }
    printf("\n");

    return 0;
}
