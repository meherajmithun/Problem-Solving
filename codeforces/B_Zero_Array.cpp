#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin >> n;
    vector<int> cs(n);
    for (auto &a : cs)
        cin >> a;
    sort(cs.begin(), cs.end());
    int sum = 0;
    for (auto a : cs)
        sum += a;
    if ((sum % 2 == 0) and (cs[n - 1]) <= (sum - cs[n - 1]))
    {
        cout << "YES";
    }
    else
        cout << "NO\n";
}