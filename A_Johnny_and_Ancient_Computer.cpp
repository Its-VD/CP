#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a > b)
            swap(a, b);

        int cnt = 0;

        while (b % 2 == 0 && b > a) {
            b /= 2;
            cnt++;
        }

        if (b != a) {
            cout << -1 << endl;
        }
        else {
            cout << (cnt + 2) / 3 << endl;
        }
    }
}