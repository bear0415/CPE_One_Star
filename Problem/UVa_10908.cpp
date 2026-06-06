#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int T;
    if (cin >> T) {
        while (T--) {
            int M, N, Q;
            cin >> M >> N >> Q;
            cout << M << " " << N << " " << Q << "\n";
            
            vector<string> grid(M);
            for (int i = 0; i < M; ++i) {
                cin >> grid[i];
            }
            
            while (Q--) {
                int r, c;
                cin >> r >> c;
                
                int radius = 0;
                char center_char = grid[r][c];
                
                while (true) {
                    bool ok = true;
                    int next_r = radius + 1;
                    int top = r - next_r;
                    int bottom = r + next_r;
                    int left = c - next_r;
                    int right = c + next_r;
                    
                    if (top < 0 || bottom >= M || left < 0 || right >= N) {
                        break;
                    }
                    
                    for (int i = top; i <= bottom; ++i) {
                        if (grid[i][left] != center_char || grid[i][right] != center_char) {
                            ok = false;
                            break;
                        }
                    }
                    
                    if (!ok) break;
                    
                    for (int j = left; j <= right; ++j) {
                        if (grid[top][j] != center_char || grid[bottom][j] != center_char) {
                            ok = false;
                            break;
                        }
                    }
                    
                    if (!ok) break;
                    
                    radius++;
                }
                
                cout << 2 * radius + 1 << "\n";
            }
        }
    }

    return 0;
}
