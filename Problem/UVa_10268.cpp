#include <bits/stdc++.h>
using namespace std;



int main() {
    
    long long x;
    while (cin >> x) {

        string line;
        getline(cin, line);
        
        while (getline(cin, line)) {
            bool has_num = false;
            for (char c : line) {
                if (isdigit(c) || c == '-') {
                    has_num = true;
                    break;
                }
            }
            if (has_num) break;
        }

        stringstream ss(line);
        vector<long long> a;
        long long temp;
        
        while (ss >> temp) {
            a.push_back(temp);
        }

        long long ans = 0;

        long long n = a.size() - 1;
        
        for (int i = 0; i < n; ++i) {//模擬微分
            ans = ans * x + a[i] * (n - i);
        }

        cout << ans << "\n";
    }

    return 0;
}
