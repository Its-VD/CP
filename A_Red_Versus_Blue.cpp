#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;

        int groups = b + 1;

        int x = r / groups;   // minimum R in each group
        int extra = r % groups;

        string ans;

        for (int i = 0; i < groups; i++) {

            int cnt = x;

            if (extra > 0) {
                cnt++;
                extra--;
            }

            while (cnt--) {
                ans += 'R';
            }

            if (i < b) {
                ans += 'B';
            }
        }

        cout << ans << '\n';
    }
}