#include <iostream>
using namespace std;


int main() {
  char *list[] = { "Hello", "ABC", "BCD" };
  char **ppstr = list;

  ppstr[0]; // "Hello"
  ppstr[1]; // "ABC"
  ppstr[2]; // "BCD"

  ppstr[0][0]; // "H"
  ppstr[0][1]; // "e"   , Hello的第2个元素
  ppstr[1][2]; // "C"


  // 把上面的改写
  *(ppstr + 0);   // "Hello"
  *(ppstr + 1);   // "ABC"
  *(ppstr + 2);   // "BCD"

  // 相当于ppstr[0][0]
  *(*(ppstr + 0) + 0); // "H"
  // 上面减化后就是
  **ppstr;   // "H"

  *(*(ppstr + 1) + 2);
  // 上面相当于 ppstr[1][2];   // C

}
