#include <bits/stdc++.h>

using namespace std;

int main() {
    
    vector<string> lines;
    string line;
    size_t max_len = 0;
    
   
    while (getline(cin, line)) {
        lines.push_back(line);
        max_len = max(max_len, line.length());
    }
    
    
    for (size_t i = 0; i < max_len; ++i) {
        // 從最後一句開始，印到第一句
        for (int j = lines.size() - 1; j >= 0; --j) {
            if (i < lines[j].length()) {
                cout << lines[j][i];
            } else {
                cout << ' '; 
            }
        }
        cout << '\n';
    }
    
    return 0;
}
