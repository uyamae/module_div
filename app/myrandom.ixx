// mylib のrandom パーティションインターフェースモジュール
export module mylib:random;

namespace mylib {

    // 乱数シード
    export unsigned int seed();
    // xorshift による乱数
    export unsigned int xorshift32(unsigned int seed);

}
