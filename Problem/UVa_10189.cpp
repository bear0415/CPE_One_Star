#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, m;
    int cases = 1;

    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    while (cin >> n >> m && (n != 0 || m != 0)) {
        if (cases > 1) {
            cout << "\n";
        }

        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }

        cout << "Field #" << cases++ << ":\n";

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '*') {
                    cout << '*';
                } else {
                    int mines = 0;
                    for (int k = 0; k < 8; k++) {
                        int nx = i + dx[k];
                        int ny = j + dy[k];

                        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                            if (grid[nx][ny] == '*') {
                                mines++;
                            }
                        }
                    }
                    cout << mines;
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
