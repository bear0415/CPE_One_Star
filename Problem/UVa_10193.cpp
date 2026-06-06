#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (cin >> N) {
        for (int i = 1; i <= N; ++i) {
            string S1, S2;
            cin >> S1 >> S2;
            
            long long num1 = stoll(S1, nullptr, 2);
            long long num2 = stoll(S2, nullptr, 2);
            
            if (gcd(num1, num2) > 1) {
                cout << "Pair #" << i << ": All you need is love!\n";
            } else {
                cout << "Pair #" << i << ": Love is not all you need!\n";
            }
        }
    }
    return 0;
}
