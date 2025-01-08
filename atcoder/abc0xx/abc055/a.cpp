// https://atcoder.jp/contests/abc055/tasks/abc055_a

#include <iostream>
using namespace std;

int func(int n) {
    return n * 800 - n / 15 * 200;
}

int main() {
    cout << func(20) << endl;
    //=> 15800

    cout << func(60) << endl;
    //=> 47200
}
