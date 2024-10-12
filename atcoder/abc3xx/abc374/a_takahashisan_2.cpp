// https://atcoder.jp/contests/abc374/tasks/abc374_a

#include <iostream>
using namespace std;

string func(string s) {
    if (s.substr(s.size() - 3) == "san") {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    cout << func("takahashisan") << endl;
    //=> Yes

    cout << func("aokikun") << endl;
    //=> No
}
