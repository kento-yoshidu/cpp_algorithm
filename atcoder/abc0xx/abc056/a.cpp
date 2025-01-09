// https://atcoder.jp/contests/abc056/tasks/abc056_a

#include <iostream>
using namespace std;

string func(string a, string b) {
    if (a == "H") {
        return b;
    }

    if (b == "H") {
        return "D";
    } else {
        return "H";
    }
}

int main() {
    cout << func("H", "H") << endl;
    //=> "H"

    cout << func("D", "H") << endl;
    //=> D

    cout << func("D", "D") << endl;
    //=> H
}
