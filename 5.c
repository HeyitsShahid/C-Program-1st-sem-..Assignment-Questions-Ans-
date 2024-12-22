//Lets code it--Shahid
#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    
    scanf("%d", &num);

    
    if (num < 0) {
        return 1; 
    }

    
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    
    printf("Factorial of %d is %llu\n", num, factorial);

    return 0;
}
