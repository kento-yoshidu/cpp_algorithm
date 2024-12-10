// https://atcoder.jp/contests/joi2022yo1a/tasks/joi2022_yo1a_b

#include <iostream>
using namespace std;

int func(int x, int y, int z) {
    if (x + y <= z) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    cout << func(2, 3, 4) << endl;
    //=> 0

    cout << func(3, 4, 10) << endl;
    //=> 1
}
