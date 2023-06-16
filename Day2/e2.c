#include <stdio.h>

void swap_data(void *a, void *b) {
   unsigned char *p1 = (unsigned char *)a;
  unsigned char *p2 = (unsigned char *)b;
    unsigned char temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    p1++;
    p2++;
  }
}

int main() {
  int a = 10;
  char b = 'A';

  swap_data(&a, &b);
  printf("a = %d\n", a);
  printf("b = %c\n", b);

  return 0;
}