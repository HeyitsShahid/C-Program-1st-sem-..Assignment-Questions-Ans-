//Lets code it--Shahid
#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex subtract(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

int main() {
    Complex num1, num2, sum, difference;

    
    scanf("%f %f", &num1.real, &num1.imag);

    
    scanf("%f %f", &num2.real, &num2.imag);

    
    sum = add(num1, num2);
    difference = subtract(num1, num2);

    
    printf("Addition: %.1f + %.1fi\n", sum.real, sum.imag);
    printf("Subtraction: %.1f - %.1fi\n", difference.real, difference.imag);

    return 0;
}
