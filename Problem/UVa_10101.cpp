#include <bits/stdc++.h>
using namespace std;


void pa(long long n) {
    
    if (n >= 10000000) {
        pa(n / 10000000);
        cout << " kuti";
        n %= 10000000;
    }
   
    if (n >= 100000) {
        pa(n / 100000);
        cout << " lakh";
        n %= 100000;
    }
    
    if (n >= 1000) {
        pa(n / 1000);
        cout << " hajar";
        n %= 1000;
    }
    
    if (n >= 100) {
        pa(n / 100);
        cout << " shata";
        n %= 100;
    }
    
    if (n > 0) {
        cout << " " << n;
    }
}

int main() {
    
    long long n;
    int case_num = 1;

    
    while (cin >> n) {
       
        cout << setw(4) << case_num << ".";

        
        if (n == 0) {
            cout << " 0";
        } else {
            
            pa(n);
        }
        
        cout << "\n";
        case_num++;
    }

    return 0;
}
