// https://atcoder.jp/contests/abc390/tasks/abc390_a

#include <iostream>
#include <vector>
using namespace std;

string func(vector<int> a) {
    int count = 0;

    for (int i = 0; i < 4; i++) {
        if (i+1 != a[i]) {
            swap(a[i], a[i+1]);
            count++;
        }
    }

    if (count == 1) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    cout << func({1, 2, 4, 3, 5}) << endl;
    //=> Yes

    cout << func({5, 3, 2, 4, 1}) << endl;
    //=> No

    cout << func({1, 2, 3, 4, 5}) << endl;
    //=> No

    cout << func({2, 1, 3, 4, 5}) << endl;
    //=> Yes
}
