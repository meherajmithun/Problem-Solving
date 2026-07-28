/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define ll long long
#define no (cout << "NO\n")
#define yes (cout << "YES\n")

void dfs(int node, const vector<int>& p, const vector<bool>& isBlack, vector<int>& F, vector<int>& visited, int& blackCount) {
    visited[node] = 1;
    if (isBlack[node - 1]) {
        blackCount++;
    }
    int nextNode = p[node - 1];
    if (!visited[nextNode]) {
        dfs(nextNode, p, isBlack, F, visited, blackCount);
    }
}

int main() {
    fastIO;
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        vector<bool> isBlack(n);
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            isBlack[i] = (s[i] == '0');
        }

        vector<int> F(n + 1, 0);
        vector<int> visited(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                int blackCount = 0;
                dfs(i, p, isBlack, F, visited, blackCount);

                int node = i;
                do {
                    F[node] = blackCount;
                    node = p[node - 1];
                } while (node != i);
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << F[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
