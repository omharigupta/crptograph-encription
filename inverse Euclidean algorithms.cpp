#include <bits/stdc++.h>
using namespace std;

int gcdExtended(int a, int b, int *x, int *y) {
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}

int modInverse(int a, int m) {
    int x, y;
    int gcd = gcdExtended(a, m, &x, &y);

    if (gcd != 1) {
        cout << "Inverse doesn't exist";
        return -1;
    } else {
        // m is added to handle negative x
        int res = (x % m + m) % m;
        return res;
    }
}

int main() {
    int a, m;
    cout << "Enter two numbers: ";
    cin >> a >> m;

    cout << "Modular multiplicative inverse is " << modInverse(a, m);
    return 0;
}
