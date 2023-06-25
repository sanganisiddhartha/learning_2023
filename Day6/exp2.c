#include <stdio.h> 
struct Complex {
    float real;
    float imag;
};

void readComplex(struct Complex* num) {
    printf("Enter the real part: ");
    scanf("%f", &(num->real));

    printf("Enter the imaginary part: ");
    scanf("%f", &(num->imag));
}

void writeComplex(struct Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.imag);
}

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;

    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;

    return result;
}

struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;

    result.real = num1.real * num2.real - num1.imag * num2.imag;
    result.imag = num1.real * num2.imag + num1.imag * num2.real;

    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&num1);

    printf("Enter the second complex number:\n");
    readComplex(&num2);

    printf("\nFirst complex number:\n");
    writeComplex(num1);

    printf("Second complex number:\n");
    writeComplex(num2);
    sum = addComplex(num1, num2);
    printf("\nSum of the complex numbers:\n");
    writeComplex(sum);

    product = multiplyComplex(num1, num2);
    printf("\nProduct of the complex numbers:\n");
    writeComplex(product);

    return 0;
}