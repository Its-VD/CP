#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int start = 0;
        int cnt = 0;
        int ans = n;

        for (int end = 0; end < n; end++) {

            if (s[end] == 'W')
                cnt++;

            
            if (end - start + 1 > k) {
                if (s[start] == 'W')
                    cnt--;

                start++;
            }

            
            if (end - start + 1 == k) {
                ans = min(ans, cnt);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}