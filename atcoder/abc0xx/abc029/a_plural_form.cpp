// https://atcoder.jp/contests/abc029/tasks/abc029_a

#include <iostream>
using namespace std;

string func(string w) {
    return w + "s";
}

int main() {
    cout << func("dog") << endl;
    //=> dogs

    cout << func("chokudai") << endl;
    //=> chokudais

    return 0;
}
