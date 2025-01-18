// https://atcoder.jp/contests/abc067/tasks/abc067_a

#include <iostream>
using namespace std;

string func(int a, int b) {
    if (a % 3 == 0 || b % 3 == 0 || (a+b) % 3 == 0) {
        return "Possible";
    } else {
        return "Impossible";
    }
}

int main() {
    cout << func(4, 5) << endl;
    //=> Possible

    cout << func(1, 1) << endl;
    //=> Impossible
}
