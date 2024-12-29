// https://atcoder.jp/contests/abc386/tasks/abc386_a

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

string func(int a, int b, int c, int d) {
    array<int, 4> arr = {a, b, c, d};
    std::sort(arr.begin(), arr.end());
    auto it = std::unique(arr.begin(), arr.end());

    return (std::distance(arr.begin(), it) == 2) ? "Yes" : "No";

}

int main() {
    cout << func(7, 7, 7, 1) << endl;
    //=> Yes

    cout << func(13, 12, 11, 10) << endl;
    //=> No

    cout << func(3, 3, 5, 5) << endl;
    //=> Yes

    cout << func(8, 8, 8, 8) << endl;
    //=> No

    cout << func(1, 3, 4, 1) << endl;
    //=> No
}
