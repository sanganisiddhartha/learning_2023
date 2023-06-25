#include <stdio.h>

int find_lar_num(int num) {
  int largest = 0;
    int temp = num;
    for (int i = 0; i < 4; i++) {
        int divisor = 1;
        for (int j = 0; j < i; j++) {
            divisor *= 10;
        }
        int deletedNum = (temp / (divisor * 10)) * divisor + (temp % divisor);
        if (deletedNum > largest) {
            largest = deletedNum;
        }
    }
  return largest;
}

int main() {
  int num = 5872;
  int lar_num = find_lar_num(num);
  printf("The largest number obtained by deleting a single digit from %d is %d\n", num, lar_num);
  return 0;
}