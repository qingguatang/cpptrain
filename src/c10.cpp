#include <iostream>
using namespace std;


int main() {
  // 指针数组，三个元素，每个元素都指向一个字符串
  char* list[] = { "ZHello", "World", "OK" };
  int n = sizeof(list) / sizeof(char*);
  char **str = list;

  char *min = str[0];
  for (int i = 1; i < n; i++) {
    if (strcmp(min, str[i]) > 0) {
      min = str[i];
    }
  }

  cout << "最小字符串为:" << min << endl;
}
