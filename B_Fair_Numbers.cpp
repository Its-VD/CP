#include <bits/stdc++.h>
using namespace std;

bool fair(long long n) {
    long long x = n;

    while (x > 0) {
        int digit = x % 10;
        x /= 10;

        if (digit != 0 && n % digit != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        while (!fair(n)) {
            n++;
        }

        cout << n << '\n';
    }
}