#include <iostream>


bool is_palindrome(char *str) {
  char *front = str;
  char *back = str + strlen(str) - 1;
  while (front < back) {
    if (*front != *back) {
      return false;
    }
    front++;
    back--;
  }
  return true;
}


int main(void) {
  char *str = "madam";
  if (is_palindrome(str)) {
    printf("%s是回文", str);
  } else {
    printf("%s不是回文", str);
  }
}

