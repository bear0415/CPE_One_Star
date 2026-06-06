#include <bits/stdc++.h>

using namespace std;

long long get_steps(long long x, long long y) {
    long long n = x + y;
    return n * (n + 1) / 2 + x;
}

int main() {
    
    int n;
    if (cin >> n) {
        for (int i = 1; i <= n; ++i) {
            long long x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            
            long long steps1 = get_steps(x1, y1);
            long long steps2 = get_steps(x2, y2);
            
            cout << "Case " << i << ": " << steps2 - steps1 << "\n";
        }
    }

    return 0;
}
