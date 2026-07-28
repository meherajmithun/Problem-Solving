#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        p.push_back({b, a});
    }
    sort(p.begin(), p.end());
    // for(auto u : p){
    //     cout<<u.first<<" "<<u.second<<endl;
    // }
    int i = 0, cnt = 1, x = p[0].first;
    for (int i = 1; i < n; i++)
    {
        if (p[i].second >= x)
        {
            x = p[i].first;
            cnt++;
        }
    }
    cout << cnt << endl;
}