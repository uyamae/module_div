// アプリケーションの一部
module;
#include <iostream>
module sub;
import mylib;

void func()
{
    // mylib:random の機能を利用
    auto a = mylib::seed();
    auto b = mylib::xorshift32(a);
    // mylib:math の機能を利用
    auto c = mylib::add(a, b);
    auto d = mylib::sub(a, b);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
}