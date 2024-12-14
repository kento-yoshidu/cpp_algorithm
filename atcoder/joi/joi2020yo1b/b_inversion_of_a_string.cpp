// https://atcoder.jp/contests/joi2020yo1b/tasks/joi2020_yo1b_b

#include <iostream>
#include <algorithm>
using namespace std;

string func(int n, int a, int b, string s) {
    a--;
    b--;

    string left = s.substr(0, a);
    string mid = s.substr(a, b - a + 1);
    std::reverse(mid.begin(), mid.end());
    string right = s.substr(b + 1);

    return left + mid + right;
}

int main() {
    cout << func(10, 3, 7, "JOIjoiJoIj") << endl;
    //=> JOJiojIoIj

    cout << func(9, 6, 6, "abcdefghi") << endl;
    //=> abcdefghi
}
