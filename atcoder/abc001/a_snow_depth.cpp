// https://atcoder.jp/contests/abc001/tasks/abc001_1

#include <iostream>
using namespace std;

int func(int a, int b) {
    return a - b;
}

int main() {
    cout << func(15, 10) << endl;
    // 5

    cout << func(0, 0) << endl;
    // 0

    cout << func(5, 20) << endl;
    // -15
}
