// mylib のrandom パーティションインターフェースモジュール
module;
#include <random>
module mylib:random;

namespace mylib {

    // 乱数シード
    unsigned int seed()
    {
        std::random_device d;
        return static_cast<unsigned int>(d());
    }
    // xorshift
    unsigned int xorshift32(unsigned int seed)
    {
        seed ^= (seed << 13);
        seed ^= (seed >> 17);
        seed ^= (seed << 15);
        return seed;
    }

}