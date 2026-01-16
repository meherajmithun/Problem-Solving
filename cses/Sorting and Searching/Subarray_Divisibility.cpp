#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;

    map<int, int> mp;
    mp[0]++;
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        a += v[i];
        mp[(a % n + n) % n]++;
    }
    int ans = 0;
    for (auto u : mp)
    {
        int a = u.second;
        ans += a * (a - 1) / 2;
    }
    cout << ans;
}