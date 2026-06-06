#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    if (cin >> n) {
        while (n--) {
            long long s, d;
            cin >> s >> d;

            if (s >= d && (s + d) % 2 == 0) {
                long long a = (s + d) / 2;
                long long b = (s - d) / 2;
                cout << a << " " << b << "\n";
            } else {
                cout << "impossible\n";
            }
        }
    }

    return 0;
}
