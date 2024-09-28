// https://atcoder.jp/contests/abc201/tasks/abc201_a

#include <iostream>
#include <algorithm>
using namespace std;

string func(int a[3]) {
    std::sort(a, a+3);

    if (a[2] - a[1] == a[1] - a[0]) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    int a1[3] = {5, 1, 3};
    cout << func(a1) << endl;
    //=> Yes

    int a2[3] = {1, 4, 3};
    cout << func(a2) << endl;
    //=> No

    int a3[3] = {5, 5, 5};
    cout << func(a3) << endl;
    //=> Yes
}
