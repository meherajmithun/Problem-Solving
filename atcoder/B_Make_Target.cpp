#include <bits/stdc++.h>
using namespace std;

void slow() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

int main() {
    slow();
    int n; 
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n, '.'));

    for (int i = 0; i < n; ++i) {
        int j = n - 1 - i;
        if (i <= j) {
            char color = (i % 2 == 0) ? '#' : '.';
            for (int x = i; x <= j; ++x) {
                for (int y = i; y <= j; ++y) {
                    grid[x][y] = color;
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << grid[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
