// https://atcoder.jp/contests/abc354/tasks/abc354_a

#include <iostream>
#include <cmath>
using namespace std;

int calc(int h, int height, int day) {
    if (height > h) {
        return day;
    }

    return calc(h, height + pow(2, day), day+1);
}

int func(int h) {
    return calc(h, 0, 0);
}

int main() {
    cout << func(54) << endl;
    //=> 6

    cout << func(7) << endl;
    //=> 4

    cout << func(262144) << endl;
    //=> 19
}
