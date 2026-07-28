#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int n, vector<int> v, int mid, int t)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mid / v[i];
        if (sum >= t)
            return 1;
    }
    return 0;
}

int32_t main()
{
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (auto &a : v)
        cin >> a;
    int lo = 1, hi = 1e18 + 123;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (check(n, v, mid, t))
        {
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }
    cout << hi + 1 << '\n';
}