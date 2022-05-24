#include <iostream>
import mylib;
import sub;
import other;

int main()
{
    // mylib:math の機能を利用
    auto a = mylib::add(3, 4);
    auto b = mylib::sub(6, 5);
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    // sub の関数を利用
    func();
    // other の関数を利用
    other_func();

    return 0;
}