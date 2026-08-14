#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        char c;
        cin >> c;

        string s;
        cin >> s;

        if (c == 'g') {
            cout << 0 << endl;
            continue;
        }

        vector<int> pref(s.size());

        s += s;

        int timer = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == 'g') {
                timer = 0;
            } else {
                timer++;
            }

            if (i < s.size() / 2) {
                pref[i] = timer;
            }
        }

        int ans = 0;

        for (int i = s.size() / 2 - 1; i >= 0; i--) {
            if (s[i] == c) {
                ans = max(ans, pref[i]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}