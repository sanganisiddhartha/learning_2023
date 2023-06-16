#include <stdio.h>

int main() {
  double x = 0.7;
  unsigned int *p = (unsigned int *)&x;
  int exponent = (*p >> 23) & 0xFF;
  printf("The exponent of x in hexadecimal is: 0x%x\n", exponent);
  printf("The exponent of x in binary is: 0b%b\n", exponent);
  return 0;
}