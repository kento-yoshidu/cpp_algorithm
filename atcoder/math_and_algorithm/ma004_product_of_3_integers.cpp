// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_d

#include <iostream>
using namespace std;

int func(int a1, int a2, int a3) {
    return a1 * a2 * a3;
}

int main() {
    cout << func(2, 8, 8) << endl;
    //=> 128

    cout << func(7, 7, 25) << endl;
    //=> 1225

    cout << func(100, 100, 100) << endl;
    //=> 1000000
}
