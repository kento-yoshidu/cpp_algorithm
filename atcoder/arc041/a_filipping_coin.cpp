// https://atcoder.jp/contests/arc041/tasks/arc041_a

#include <iostream>
using namespace std;

int func(int x, int y, int k) {
    if (k <= y) {
        return x + k;
    } else {
        return x + y - (k - y);
    }
}

int main() {
    cout << func(3, 2, 1) << endl;
    //=> 4

    cout << func(3, 2, 4) << endl;
    //=> 3

    cout << func(3, 2, 5) << endl;
    //=> 2
}
