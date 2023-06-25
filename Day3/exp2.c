#include <stdio.h>

void print_bits(unsigned int n) {
  for (int i = 31; i >= 0; i--) {
    printf("%d", (n & (1 << i)) ? 1 : 0);
  }
}

int main() {
   int n;
   printf("Enter of number:");
   scanf("%d",&n);
  print_bits(n);
  return 0;
}