// https://atcoder.jp/contests/abc062/tasks/abc062_a

#include <iostream>
#include <array>
using namespace std;

string func(int x, int y) {
    array<char, 12> arr = {'a', 'b', 'a', 'c', 'a', 'c', 'a', 'a', 'c', 'a', 'c', 'a'};

    if (arr[x-1] == arr[y-1]) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    cout << func(1, 3) << endl;
    //=> Yes

    cout << func(2, 4) << endl;
    //=> No
}
