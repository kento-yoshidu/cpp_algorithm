// https://atcoder.jp/contests/abc073/tasks/abc073_a

#include <iostream>
using namespace std;

string func(int n) {
    if (n / 10 == 9 || n % 10 == 9) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    cout << func(29) << endl;
    //=> Yes

    cout << func(72) << endl;
    //=> No

    cout << func(91) << endl;
    //=> Yes
}
