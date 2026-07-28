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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    int cnt = 0;
    map<int, int> mp;
    vector<int> pre(n + 1);
    mp[pre[0]]++;
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i - 1];
    }
    // for(auto u : pre) cout<<u<<" ";
    // cout<<endl;

    for (int i = 1; i <= n; i++)
    {
        int t = (pre[i] - k);
        cnt += mp[t];
        mp[pre[i]]++;
    }
    print(cnt);
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