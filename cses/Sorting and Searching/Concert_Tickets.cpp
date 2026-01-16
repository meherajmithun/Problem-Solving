#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << '\n'

void slow()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

/// 3 5 5 7 8

int main()
{
    int n, query;
    cin >> n >> query;
    multiset<ll> ms;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ms.insert(a);
    }
    while (query--)
    {
        int a;
        cin >> a;
        a++;
        auto lb = ms.lower_bound(a);
        if (lb == ms.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            lb--;
            cout << *lb << endl;
            ms.erase(lb);
        }
    }
}