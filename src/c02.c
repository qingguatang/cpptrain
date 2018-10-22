#include "stdio.h"

int main() {
  char c;
  printf("input a character:");
  scanf("%c", &c);
  if (c < 32) {
    printf("This is a control character\n");
  } else if (c >= '0' && c <='9') {
    printf("This is a digit\n");
  } else if (c >= 'a' && c <= 'z') {
    printf("This is a small letter\n");
  } else {
    printf("This is an other character\n");
  }
}
