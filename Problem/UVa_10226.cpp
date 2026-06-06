#include <bits/stdc++.h>
using namespace std;

void solve(bool first) {
    map<string, int> mp;
    string s;
    int tot = 0;

    while (getline(cin, s) && !s.empty()) {
        mp[s]++;
        tot++;
    }

    if (!first) {
        cout << "\n";
    }

    cout << fixed << setprecision(4);

    for (auto const& p : mp) {
        double ans = (double)p.second / tot * 100.0;
        cout << p.first << " " << ans << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        string s;
        getline(cin, s); 
        getline(cin, s); 

        for (int i = 0; i < n; i++) {
            solve(i == 0);
        }
    }
    return 0;
}
