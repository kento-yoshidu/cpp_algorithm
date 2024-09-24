// https://atcoder.jp/contests/joi2007yo/tasks/joi2007yo_a

#include <iostream>
#include <algorithm>
using namespace std;

int func(int a[4], int b[4]) {
    int a_sum = 0;
    int b_sum = 0;

    for (int i = 0; i < 4; i++) {
        a_sum += a[i];
        b_sum += b[i];
    }

    return std::max(a_sum, b_sum);
}

int main() {
    int a1[4] = {100, 80, 70, 60};
    int b1[4] = {80, 70, 80, 90};

    cout << func(a1, b1) << endl;
    //=> 320

    int a2[4] = {100, 80, 70, 60};
    int b2[4] = {80, 70, 60, 100};

    cout << func(a2, b2) << endl;
    //=> 310
}
