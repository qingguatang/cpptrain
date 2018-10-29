#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // s存放sin(x)的和
  // t 是每一项的值
  // sin(x) 的 泰勒展开为  sin(x) = x - x^3 / 3! + x^5 / 5! - x^7 / 7! +...
  double s, t, x;

  int n;

  cout << "please input x:";
  // x是弧度
  cin >> x;

  t = x;   // 现在求 sin(x)，根据上述公式，第一项为 x
  n = 1;
  s = x;   // 和为x
  do {
    // 结合上述公式， 上一项为t时, 下一项为
    // 看上述公式，如果当前项为t, 则下一项为 t * (-x * x) / ((n + 1) * (n + 2))
    t = t * (-x * x) / ((n + 1) * (n + 2));
    s = s + t;
    n = n + 2;  // 我将你的代码小改了下，n 移到最后了，更容易理解。
  } while (fabs(t) >= 1e-7);
  // 不断地循环，直到精度达到 1e-7为止。
  // fabs是个函数，来自于 <cmath>, 用于求浮点数的绝对值

  cout << "sin(" << x << ")=" << s << endl;
  return 0;
}
