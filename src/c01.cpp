#include <iostream>

using namespace std;


int main() {
  char c;
  cout << "input a character:";
  cin >> c;
  if (c < 32) {
    cout << "This is a control character\n";
  } else if (c >= '0' && c <='9') {
    cout << "This is a digit\n";
  } else if (c >= 'a' && c <= 'z') {
    cout << "This is a small letter\n";
  } else {
    cout << "This is an other character\n";
  }
}
