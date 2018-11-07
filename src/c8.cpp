#include <iostream>

using namespace std;


/**
 * 判断是否为完数
 */
bool is_perfect(int num) {
  // 用循环找出num的因子, 范围为 1 <= i < num
  int sum = 0;
  for (int i = 1; i < num; i++) {
    // 能整除，就是因子
    if (num % i == 0) {
      sum += i;  //是因子就加起来
    }
  }
  return sum == num;  // 如果相等，就返回true, 就是完数
}


/**
 * 按照题目格式输出
 */
void output(int num) {
  cout << num << " = ";
  for (int i = 1; i < num; i++) {
    // 如果是因子，则输出
    if (num % i == 0) {
      // 除1以外，都先输出一个+， 再输出相应的数字
      if (i != 1) {
        cout << " + ";
      }
      cout << i;
    }
  }
  cout << endl;
}


int main() {
  for (int num = 1; num <= 1000; num++) {
    if (is_perfect(num)) {
      output(num);
    }
  }
}
