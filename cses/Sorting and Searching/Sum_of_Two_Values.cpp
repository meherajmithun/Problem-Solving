#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        p.push_back({a, i});
    }
    sort(p.begin(), p.end());
    int l = 0, r = n - 1;
    while (l < r)
    {
        int sum = p[l].first + p[r].first;
        // cout<<p[l].first<<" "<<p[r].first<<" "<<sum<<endl;
        if (sum == target)
        {
            cout << p[r].second + 1 << " " << p[l].second + 1 << '\n';
            return 0;
        }
        else if (sum > target)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    cout << "IMPOSSIBLE" << '\n';
}