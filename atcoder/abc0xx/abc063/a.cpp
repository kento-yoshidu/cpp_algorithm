// https://atcoder.jp/contests/abc063/tasks/abc063_a

#include <iostream>
#include <string>
using namespace std;

string func(int a, int b) {
    if (a + b >= 10) {
        return "error";
    } else {
        return to_string(a + b);
    }
}

int main() {
    cout << func(6, 3) << endl;
    //=> 9

    cout << func(6, 4) << endl;
    //=> error
}
