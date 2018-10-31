#include <stdio.h>


int main() {
  int a[] = {1,2,3,4,5,6,7,8,9,10};
  int *p1 = a;

  int b[][3] = {{1, 2, 3}, {4, 5, 6 }, {7, 8, 9 }};
  int (*p2)[3] = b;

  p1++;
  p2++;

  printf("%d\n", *p1);     // 2
  printf("%d\n", *p2[0]);  // 4
  return 0;
}
