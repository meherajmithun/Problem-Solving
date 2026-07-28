#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n, query;
    cin >> n >> query;
    vector<int> v(n);
    vector<int> pre(n + 123);
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        pre[i] = pre[i - 1] ^ a;
    }
    while (query--)
    {
        int l, r;
        cin >> l >> r;
        cout << (pre[r] ^ pre[l - 1]) << endl;
    }
}