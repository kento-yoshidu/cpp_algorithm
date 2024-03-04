// https://atcoder.jp/contests/abc033/tasks/abc033_a

#include <iostream>
using namespace std;

string func(string n) {
    if (n[0] == n[1] && n[1] == n[2] && n[2] == n[3]) {
        return "SAME";
    } else {
        return "DIFFERENT";
    }
}

string func2(int n) {
    if (n % 1111 == 0) {
        return "SAME";
    } else {
        return "DIFFERENT";
    }
}

int main() {
    cout << func("2222") << endl;
    cout << func2(2222) << endl;
    //=> SAME

    cout << func("1221") << endl;
    cout << func2(1221) << endl;
    //=> DIFFERENT

    cout << func("0000") << endl;
    cout << func2(0000) << endl;
    //=> SAME
}
