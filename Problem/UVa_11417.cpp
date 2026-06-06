#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    

    int N;
    while (cin >> N && N != 0) {
        long long G = 0;
        
        for (int i = 1; i < N; i++) {
            for (int j = i + 1; j <= N; j++) {
                G += gcd(i, j);
            }
        }
        
        cout << G << "\n";
    }

    return 0;
}
