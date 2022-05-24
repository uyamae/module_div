// アプリケーションの一部
module;
#include <iostream>
module other;
import mylib;

void other_func()
{
    // mylib:random の機能を利用
    std::cout << mylib::seed() << std::endl;
}

void other_func2()
{
    // mylib:random の機能を利用
    std::cout << mylib::seed() << std::endl;
    std::cout << mylib::seed() << std::endl;
}
