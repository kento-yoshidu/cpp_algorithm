// https://atcoder.jp/contests/abc034/tasks/abc034_a

#include <iostream>
using namespace std;

string func(int x, int y) {
    if (x < y) {
        return "Better";
    } else {
        return "Worse";
    }
}

int main() {
    cout << func(12, 34) << endl;
    //=> Better

    cout << func(98, 56) << endl;
    //=> Worse
}
