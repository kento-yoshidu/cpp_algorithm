// https://atcoder.jp/contests/abc032/tasks/abc032_a

#include <iostream>
using namespace std;

int func(int a, int b, int n) {
    while(true) {
        if (n % a == 0 && n % b == 0) {
            return n;
        }

        n++;
    }
}

int main() {
    cout << func(2, 3, 8) << endl;
    //=> 12

    cout << func(2, 2, 2) << endl;
    //=> 2

    cout << func(12, 8, 25) << endl;
    //=> 48
}
