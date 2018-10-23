// 这个C++程序，最好是学了C语言再学C++，因为C语言是C++的子集。
// 所以我写了这个程序对应的[C语言版本](c02.c)

// c++的输入输出库，相当于c语言中的 #include <stdio.h>
// 里面有cin和cout是两个用于输入输出的对象
// 文档可见这里：http://www.cplusplus.com/reference/iostream/
#include <iostream>

// C++中有名字空间的概念
// 你可以理解为， 如果不用这句话，那下面使用 cin 和 cout 这两个对象要带上 std:: 前缀，比如：
// std::cout << "hello" << std::endl;
// 写了这句话，就可以直接使用 cout 和 cin 了。

using namespace std;

// 入口函数，和c语言一样。
int main() {
  // 这个和c语言一样
  char c;

  // 初学C++或者学过C语言的同学可能看下面这句话很迷惑，这到底哪开始哪结束。
  // 其实这是一个方法调用。<< 是一个方法名称（理解为函数），只是不是英文字母，而是符号。
  // 在C++中叫做"操作符重载", 相象一样，我还可以重新定义加或乘, 这样就可以对复杂的矩阵，用类似于数学的语句来计算了。
  // cout 是一个对象, cout << 其实是调用 cout对象的<<方法。
  // 如果你第一次听到“对象”，或者“面向对象”这个词， 那么就先不要管，只要把下面的语句直接记住。
  // cout << xxx 表示往控制台输出内容就好。
  cout << "input a character:";    // 相当于c语言中的 printf("input a character:")

  // 同理，cin 是一个对象，>> 是一个方法， 第一次学习时，直接记住
  // cin >> c 就是从控制台输入一个字符，放到c中。
  cin >> c;


  // ? 问题，在 c语言中输入是 `scanf("%d", &c)`  <--- 这里有个取地址运算，为什么上面直接写c，而不是&c呢？
  // 这是因为在C++中还引入“引用”这个类型, 所以C++比C语言复杂太多， 主要有：
  // 1. 名字空间
  // 2. 引用类型（C语言中有指针）
  // 3. 类和对象（面向对象）， 还比较复杂，允许多重继承
  // 4. 泛型，或者叫模板（template）（非常强大的泛型编程能力）
  //    你可以认为用代码生成代码，即在编译期能运行，并且生成更复杂的代码，以提高运行期的运行效率。
  // 5. STL库，标准模板库。
  // 总的来说，C++比C复杂太多太多，我们平常也只是使用它的一个极小的子集。
  // 我的建议是，先学好C语言（包括指针），你可以学习C++，只是先注重C语言的特性部分，因为C语言是C++的子集，它是兼容的
  // 然后看需要学习C++中的面向对象以及模板等特性。


  // 下面的语句和c语言没什么区别了。
  if (c < 32) {
    cout << "This is a control character\n";
  } else if (c >= '0' && c <='9') {
    cout << "This is a digit\n";
  } else if (c >= 'a' && c <= 'z') {
    cout << "This is a small letter\n";
  } else {
    cout << "This is an other character\n";
  }

  // 在main函数中，return 0可省略。
}
