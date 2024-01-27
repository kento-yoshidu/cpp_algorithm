// https://atcoder.jp/contests/abc006/tasks/abc006_1

#include <iostream>
#include <string>
using namespace std;

std::string func(string s) {
    if (s.find("3") != string::npos) {
        return "YES";
    }

    int num = stoi(s);

    if (num % 3 == 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    cout << func("2") << endl;
    // NO

    cout << func("9") << endl;
    // YES

    cout << func("13") << endl;
    // YES
}
