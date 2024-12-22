// Lets code it--Shahid
#include <stdio.h>

int main() {
    
    int int1, int2;
    float float_num;

    
    
    scanf("%d", &int1);
    
    scanf("%d", &int2);
    
    scanf("%f", &float_num);

    
    int bitwise_result = (int1 & int2) | (int1 ^ int2);

    
    float arithmetic_result = (int1 * float_num) + (int2 / float_num);

    
    printf("%d\n", bitwise_result);  
    printf("%.4f\n", arithmetic_result); 

    return 0;
}
