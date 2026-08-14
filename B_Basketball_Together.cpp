// A basketball competition is held where the number of players in a team does not have a maximum or minimum limit (not necessarily 5
//  players in one team for each match). There are 𝑁
//  candidate players in the competition that will be trained by Pak Chanek, the best basketball coach on earth. The 𝑖
// -th candidate player has a power of 𝑃𝑖
// .

// Pak Chanek will form zero or more teams from the 𝑁
//  candidate players on the condition that each candidate player may only join in at most one team. Each of Pak Chanek's teams will be sent to compete once with an enemy team that has a power of 𝐷
// . In each match, the team sent is said to defeat the enemy team if the sum of powers from the formed players is strictly greater than 𝐷
// .

// One of Pak Chanek's skills is that when a team that has been formed plays in a match, he can change the power of each player in the team to be equal to the biggest player power from the team.

// Determine the maximum number of wins that can be achieved by Pak Chanek.

// Input
// The first line contains two integers 𝑁
//  and 𝐷
//  (1≤𝑁≤105
// , 1≤𝐷≤109
// ) — the number of candidate players and the power of the enemy team.

// The second line contains 𝑁
//  integers 𝑃1,𝑃2,…,𝑃𝑁
//  (1≤𝑃𝑖≤109
// ) — the powers of all candidate players.

// Output
// A line containing an integer representing the maximum number of wins that can be achieved by Pak Chanek.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long d;

    cin >> n >> d;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int ans = 0;
    int rem = n;
    int j = n - 1;

    while (j >= 0) {

        long long req = d / arr[j] + 1;

        if (req > rem) {
            break;
        }

        ans++;
        rem -= req;

        
        j--;
    }

    cout << ans << endl;

    return 0;
}