#include <bits/stdc++.h>

using namespace std;

int main() {
   

    unsigned int I;
    while (cin >> I && I != 0) {
        string b = "";
        int p = 0;
        
        while (I > 0) {
            if (I & 1) {
                b = "1" + b;
                p++;
            } else {
                b = "0" + b;
            }
            I >>= 1;
        }
        
        cout << "The parity of " << b << " is " << p << " (mod 2).\n";
    }

    return 0;
}
