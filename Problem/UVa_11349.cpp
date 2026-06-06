#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long T;
    if (cin >> T) {
        for (long long t = 1; t <= T; ++t) {
            char c1, c2;
            long long n;
            cin >> c1 >> c2 >> n;

            long long total = n * n;
            vector<long long> v(total);
            bool valid = true;

            for (long long i = 0; i < total; ++i) {
                cin >> v[i];
                if (v[i] < 0) {
                    valid = false;
                }
            }

            if (valid) {
                for (long long i = 0; i < total / 2; ++i) {
                    if (v[i] != v[total - 1 - i]) {
                        valid = false;
                        break;
                    }
                }
            }

            cout << "Test #" << t << ": ";
            if (valid) {
                cout << "Symmetric.\n";
            } else {
                cout << "Non-symmetric.\n";
            }
        }
    }
    return 0;
}
