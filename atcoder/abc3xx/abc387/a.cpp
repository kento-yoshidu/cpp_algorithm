// https://atcoder.jp/contests/abc387/tasks/abc387_a

#include <iostream>
#include <cmath>
using namespace std;

int func(int a, int b) {
    int sum = a + b;

    return sum * sum;
}

int main() {
    cout << func(20, 25) << endl;
    //=> 2025

    cout << func(30, 25) << endl;
    //=> 3025

    cout << func(45, 11) << endl;
    //=> 3136

    cout << func(2025, 1111) << endl;
    //=> 9834496
}
