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
    int l = 0, r = 0;
    map<int, int> mp;
    int cnt = 0;
    while (r < n)
    {
        mp[v[r]]++;
        if (mp.size() > k)
        {
            while (mp.size() > k)
            {
                mp[v[l]]--;
                if (mp[v[l]] == 0)
                {
                    mp.erase(v[l]);
                }
                l++;
            }
        }
        cnt += (r - l + 1);
        r++;
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