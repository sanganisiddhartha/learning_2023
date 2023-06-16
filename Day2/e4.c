#include <stdio.h>

int count_set_bits(unsigned int n) {
  int count = 0;

  while (n) {
    if (n & 1) {
      count++;
    }
    n >>= 1;
  }

  return count;
}

int main() {
  unsigned int a[3] = {0x1, 0xF4, 0x10001};
  int total_count = 0;

  for (int i = 0; i < 3; i++) {
    total_count += count_set_bits(a[i]);
  }

  printf("The total number of set bits is: %d\n", total_count);

  return 0;
}