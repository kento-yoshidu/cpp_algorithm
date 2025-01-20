// https://atcoder.jp/contests/abc070/tasks/abc070_a

#include <iostream>
using namespace std;

string func(int n) {
    if (n / 100 == n % 10) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    cout << func(575) << endl;
    //=> Yes

    cout << func(123) << endl;
    //=> No

    cout << func(812) << endl;
    //=> No
}
