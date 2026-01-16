/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int solve(){
    int n, k;
    cin >> n >> k;

    vector<vector<int>> grid(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        string row;
        cin >> row;
        for (int j = 0; j < n; ++j) {
            grid[i][j] = row[j] - '0';
        }
    }

    vector<vector<int>> reducedGrid(n / k, vector<int>(n / k));

    for (int i = 0; i < n / k; ++i) {
        for (int j = 0; j < n / k; ++j) {
            int value = grid[i * k][j * k];
            for (int x = 0; x < k; ++x) {
                for (int y = 0; y < k; ++y) {
                    if (grid[i * k + x][j * k + y] != value) {
                        cout << "Invalid input\n";
                        return 1;
                    }
                }
            }
            reducedGrid[i][j] = value;
        }
    }

    for (int i = 0; i < n / k; ++i) {
        for (int j = 0; j < n / k; ++j) {
            cout << reducedGrid[i][j];
        }
        cout << endl;
    }
    return 0;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}