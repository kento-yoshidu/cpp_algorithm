#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0 || b == 0) {
        return max(a, b);
    }

    if (a >= b) {
        return gcd(b, a%b);
    } else {
        return gcd(a, b%a);
    }
}

int func(int a, int b) {
    return gcd(a, b);
}

int main() {
    cout << gcd(900, 700) << endl;
    //=> 100

    cout << gcd(117, 432) << endl;
    //=> 9

    cout << gcd(998244353, 1000000000) << endl;
    //=> 1
}
