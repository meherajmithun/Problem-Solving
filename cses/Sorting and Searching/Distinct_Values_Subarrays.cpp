//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    map<int, int> mp;
    int l = 0, r = 0;
    int ans = 0;
    while (r < n)
    {
        mp[v[r]]++;
        if (mp[v[r]] == 2)
        {
            while (mp[v[r]] == 2)
            {
                mp[v[l]]--;
                l++;
            }
        }
        ans += (r - l + 1);
        r++;
    }
    print(ans);
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