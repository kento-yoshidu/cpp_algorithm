// https://atcoder.jp/contests/abc041/tasks/abc041_a

#include <iostream>
using namespace std;

char func(string s, int i) {
    return s[i-1];
}

int main() {
    cout << func("atcoder", 3) << endl;
    //=> c

    cout << func("beginner", 1) << endl;
    //=> b

    cout << func("contest", 7) << endl;
    //=> t

    cout << func("z", 1) << endl;
    //=> z
}
