#include <bits/stdc++.h>

using namespace std;

int n, m;

bool cmp(int a, int b) {
    int modA = a % m;
    int modB = b % m;
    
    if (modA != modB) {
        return modA < modB;
    }
    
    bool isOddA = abs(a % 2) == 1;
    bool isOddB = abs(b % 2) == 1;
    
    if (isOddA && !isOddB) {
        return true;
    }
    if (!isOddA && isOddB) {
        return false;
    }
    if (isOddA && isOddB) {
        return a > b;
    }
    return a < b;
}

int main() {
        while (cin >> n >> m) {
        cout << n << " " << m << "\n";
        
        if (n == 0 && m == 0) {
            break;
        }

        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), cmp);

        for (int i = 0; i < n; ++i) {
            cout << v[i] << "\n";
        }
    }

    return 0;
}
