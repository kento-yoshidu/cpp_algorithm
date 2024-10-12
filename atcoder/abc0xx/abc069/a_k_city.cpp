// https://atcoder.jp/contests/abc069/tasks/abc069_a

#include <iostream>
using namespace std;

int func(int n, int m) {
    return (n-1) * (m-1);
}

int main() {
    cout << func(3, 4) << endl;
    //=> 6

    cout << func(2, 2) << endl;
    //=> 1
}
