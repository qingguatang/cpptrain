#include <iostream>
using namespace std;


int main() {
  char *strs[] = {"Hello", "World", "abcd"};
  char **ppstrs = strs;

  char *min = *ppstrs;   // 相当于 *min = ppstrs[0]
  for (int i = 1; i < 3; i++) {
    if (strcmp(min, *(ppstrs + i)) > 0) { // 相当于if (strcmp(min, ppstrs[i]) > 0) {
      // min = *(ppstrs + i);    用这句也行，其实和下面的一样的
      min = ppstrs[i];
    }
  }

  cout << "最小的字符串为：" << min << endl;
}
