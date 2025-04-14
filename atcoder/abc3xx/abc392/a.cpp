// https://atcoder.jp/contests/abc392/tasks/abc392_a

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

string func(array<int, 3> a) {
    sort(a.begin(), a.end());

    if (a[0] * a[1] == a[2]) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    cout << func({3, 15, 5}) << endl;
    //=> Yes

    cout << func({5, 3, 2}) << endl;
    //=> No

    cout << func({3, 3, 9}) << endl;
    //=> Yes
}
