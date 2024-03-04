// https://atcoder.jp/contests/abc035/tasks/abc035_a

#include <iostream>
using namespace std;

string func(int w, int h) {
    if (w / 4 == h / 3) {
        return "4:3";
    } else {
        return "16:9";
    }
}

int main() {
    cout << func(4, 3) << endl;
    //=> 4:3

    cout << func(16, 9) << endl;
    //=> 16:9

    cout << func(28, 21) << endl;
    //=> 4:3
}
