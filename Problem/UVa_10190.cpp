#include <bits/stdc++.h>

using namespace std;

int main() {
  

    long long n, m;
    
    while (cin >> n >> m) {
        if (n < 2 || m < 2) {
            cout << "Boring!\n";
            continue;
        }

        vector<long long> sequence;
        long long temp = n;
        bool isValid = true;

        while (temp > 1) {
            if (temp % m != 0) {
                isValid = false;
                break;
            }
            sequence.push_back(temp);
            temp /= m;
        }
        sequence.push_back(1);

        if (isValid) {
            for (size_t i = 0; i < sequence.size(); ++i) {
                cout << sequence[i] << (i + 1 == sequence.size() ? "" : " ");
            }
            cout << "\n";
        } else {
            cout << "Boring!\n";
        }
    }

    return 0;
}
