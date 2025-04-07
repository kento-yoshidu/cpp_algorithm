// https://atcoder.jp/contests/abc071/tasks/abc071_a

#include <iostream>
using namespace std;

string func(int x, int a, int b) {
    if (abs(x-a) > abs(x-b)) {
        return "B";
    }  else {
        return "A";
    }
}

int main() {
    cout << func(5, 2, 7) << endl;
    //=> B

    cout << func(1, 999, 1000) << endl;
    //=> A
}
