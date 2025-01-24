// https://atcoder.jp/contests/abc064/tasks/abc064_a

#include <iostream>
using namespace std;

string func(int r, int g, int b) {
    int sum = r*100 + g*10 + b;

    if (sum % 4 == 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    cout << func(4, 3, 2) << endl;
    //=> YES

    cout << func(2, 3, 4) << endl;
    //=> NO
}
