// https://atcoder.jp/contests/abc028/tasks/abc028_a

#include <iostream>
using namespace std;

string func(int n) {
    if (n == 100) {
        return "Perfect";
    } else if (n >= 90) {
        return "Great";
    } else if (n >= 60) {
        return "Good";
    } else {
        return "Bad";
    }
}

int main() {
    cout << func(80) << endl;
    //=> Good

    cout << func(100) << endl;
    //=> Perfect

    cout << func(59) << endl;
    //=> Bad

    cout << func(95) << endl;
    //=> Great
}
