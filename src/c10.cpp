#include <iostream>
using namespace std;


int main() {
  char strs[3][100];
  for (int i = 0; i < 3; i++) {
    cin >> strs[i];   // c++中可以使用这个输入，C语言中使用 gets
  }

  // 下面就一样了

  char *min = strs[0];
  for (int i = 1; i < 3; i++) {
    if (strcmp(min, strs[i]) > 0) {
      min = strs[i];
    }
  }

  cout << "最小的字符串为：" << min << endl;
}
