#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    int cnt = 0, l = 0, r = 0;
    int sum = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum >= k)
        {
            while (sum >= k and l <= r)
            {
                if (sum == k)
                {
                    cnt++;
                }
                sum -= v[l];
                l++;
            }
        }
        r++;
    }
    cout << cnt << endl;
}
//      l  r
// 2 4 1 2 7
// 1+1