//Lets code it--Shahid
#include <stdio.h>

int main() {
    
    int n;
    
    scanf("%d", &n);

    if (n < 6) {
        printf("Error: Please enter at least 6 numbers.\n");
        return 1;
    }

    int numbers[n];

    
    printf("", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    
    int result = (((numbers[0] + numbers[1]) - numbers[2]) * numbers[3] / numbers[4]) % numbers[5];

    
    printf("%d\n", result);

    return 0;
}
