// https://atcoder.jp/contests/abc049/tasks/abc049_a

#include <iostream>
using namespace std;

string func(string c) {
    if (c == "a" || c == "i" || c == "u" || c == "e" || c == "o") {
        return "vowel";
    } else {
        return "consonant";
    }
}

int main() {
    cout << func("a") << endl;
    //=> vowel

    cout << func("z") << endl;
    // consonant

    cout << func("s") << endl;
    //=> consonant
}
