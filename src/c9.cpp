#include <iostream>

using namespace std;


int main() {
  for (int num = 1; num <= 1000; num++) {
    // 这里我们看num这个数是否为完数
    int sum = 0;
    for (int i = 1; i < num; i++) {
      // 是因子就加到sum上
      if (num % i == 0) {
        sum += i;
      }
    }

    // 因子相加等于这个数，就是完数
    if (sum == num) {
      // 那咱们就输出
      cout << num << " = ";
      for (int i = 1; i < num; i++) {
        if (num % i == 0) {
          if (i != 1) {
            cout << " + ";
          }
          cout << i;
        }
      }
      cout << endl;
    }
  }
}
