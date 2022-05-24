// mylib のmath パーティションインターフェースモジュール
export module mylib:math;

namespace mylib {

/// 加算関数テンプレート
export template<class T>
inline T add(T a, T b) {
    return a + b;
}

/// 減算
export int sub(int a, int b);

}
