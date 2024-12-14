// https://atcoder.jp/contests/abc382/tasks/abc382_a

#include <iostream>
using namespace std;

int func(int n, int d, string s) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '@') {
            count += 1;
        }
    }

    return n - count + d;
}

int main() {
    cout << func(5, 2, ".@@.@") << endl;
    //=> 4

    cout << func(3, 3, "@@@") << endl;
    //=> 3

    cout << func(10, 4, "@@@.@@.@@.") << endl;
    //=> 7
}
