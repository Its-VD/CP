#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n;
    cin >> s;

    string temp = s;
    sort(temp.begin(), temp.end());

    if (s == temp) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;

        char maxi = s[0];
        int idx = 0;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] < maxi) {
                cout << idx + 1 << " " << i + 1 << endl;
                break;
            }
            else {
                maxi = s[i];
                idx = i;
            }
        }
    }

    return 0;
}