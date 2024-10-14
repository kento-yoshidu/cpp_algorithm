// https://atcoder.jp/contests/abc036/tasks/abc036_a

#include <iostream>
using namespace std;

int func(int a, int b) {
    return (b + a - 1) / a;
}

int main() {
    cout << func(12, 36) << endl;
    //=> 3

    cout << func(12, 100) << endl;
    //=> 9
}
