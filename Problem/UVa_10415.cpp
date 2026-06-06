#include <bits/stdc++.h>

using namespace std;

int main() {
   
    map<char, vector<int>> m = {
        {'c', {2, 3, 4, 7, 8, 9, 10}},
        {'d', {2, 3, 4, 7, 8, 9}},
        {'e', {2, 3, 4, 7, 8}},
        {'f', {2, 3, 4, 7}},
        {'g', {2, 3, 4}},
        {'a', {2, 3}},
        {'b', {2}},
        {'C', {3}},
        {'D', {1, 2, 3, 4, 7, 8, 9}},
        {'E', {1, 2, 3, 4, 7, 8}},
        {'F', {1, 2, 3, 4, 7}},
        {'G', {1, 2, 3, 4}},
        {'A', {1, 2, 3}},
        {'B', {1, 2}}
    };

    int t;
    if (cin >> t) {
        string s;
        getline(cin, s);
        
        while (t--) {
            getline(cin, s);
            vector<int> count(11, 0);
            vector<bool> prev(11, false);
            
            for (char c : s) {
                if (m.find(c) == m.end()) continue;
                
                vector<bool> curr(11, false);
                for (int f : m[c]) {
                    curr[f] = true;
                    if (!prev[f]) {
                        count[f]++;
                    }
                }
                prev = curr;
            }
            
            for (int i = 1; i <= 10; ++i) {
                cout << count[i] << (i == 10 ? "" : " ");
            }
            cout << "\n";
        }
    }

    return 0;
}
