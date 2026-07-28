//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define INT_MAX LLONG_MAX
#define INT_MIN LLONG_MIN
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> freq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]--;
        freq[v[i]] = i;
    }
    int round = 1;
    for (int i = 1; i < n; i++)
    {
        if (freq[i] < freq[i - 1])
            round++;
    }
    // if(round != 1) round++;
    print(round);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1; // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}