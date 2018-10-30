#include <iostream>
#include <math.h>

using namespace std ;

int main () {
  int  a, b, c, d;
  cout << " put  in  three  numbers";
  cin >> a >> b >>c;
  d= b * b - 4 * a * c;
  double x, y, e;
  {
    if (d > 0) {
      double e=sqrt(d);
      x = (-b + e) / 2 * a;
      y = (-b - e) / 2 * a;
    } else if (d == 0) {
      x = -b /2 * a;
      y = x;
    } else {
      double e = sqrt(-d);
      x = (-b + e) / 2 * a;
      y = (-b -e) / 2 * a;
    }
    cout<< x << y << d << e;
    return 0;
  }
 }
