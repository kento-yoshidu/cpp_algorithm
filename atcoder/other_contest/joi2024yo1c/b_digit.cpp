// https://atcoder.jp/contests/joi2024yo1c/tasks/joi2024_yo1c_b

#include <iostream>
#include <string>
using namespace std;

int func(int a, int b) {
    return to_string(a + b).size();
}

int main() {
    cout << func(3, 9) << endl;
    //=> 2

    cout << func(499, 499) << endl;
    //=> 3

    cout << func(3, 2) << endl;
    //=> 1

    cout << func(1, 99) << endl;
    //=> 3
}
