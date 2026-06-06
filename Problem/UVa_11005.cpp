#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    if (cin >> test_cases) {
        for (int tc = 1; tc <= test_cases; ++tc) {
            if (tc > 1) {
                cout << "\n";
            }

            vector<int> cost(36);
            for (int i = 0; i < 36; ++i) {
                cin >> cost[i];
            }

            int queries;
            cin >> queries;
            
            cout << "Case " << tc << ":\n";
            
            while (queries--) {
                long long n;
                cin >> n;
                
                cout << "Cheapest base(s) for number " << n << ":";
                
                int min_cost = 2e9;
                vector<int> best_bases;
                
                for (int b = 2; b <= 36; ++b) {
                    long long temp = n;
                    int current_cost = 0;
                    
                    if (temp == 0) {
                        current_cost = cost[0];
                    } else {
                        while (temp > 0) {
                            current_cost += cost[temp % b];
                            temp /= b;
                        }
                    }
                    
                    if (current_cost < min_cost) {
                        min_cost = current_cost;
                        best_bases.clear();
                        best_bases.push_back(b);
                    } else if (current_cost == min_cost) {
                        best_bases.push_back(b);
                    }
                }
                
                for (int b : best_bases) {
                    cout << " " << b;
                }
                cout << "\n";
            }
        }
    }

    return 0;
}
