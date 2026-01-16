#include <bits/stdc++.h>
using namespace std;
const int N = 1000005;
#define int long long
vector<int> cs(N), seg(N * 4);

void build(int ind, int low, int high)
{
    if (low == high)
    {
        seg[ind] = cs[low];
        return;
    }
    int mid = (low + high) >> 1;
    build(2 * ind, low, mid);
    build(2 * ind + 1, mid + 1, high);
    seg[ind] = (seg[2 * ind] + seg[2 * ind + 1]);
}

void update(int ind, int low, int high, int pos, int val)
{
    if (low == high)
    {
        seg[ind] = val;
        return;
    }
    int mid = (low + high) >> 1;
    if (pos <= mid)
        update(ind * 2, low, mid, pos, val);
    else
        update(ind * 2 + 1, mid + 1, high, pos, val);

    seg[ind] = seg[ind * 2] + seg[ind * 2 + 1];
}

int query(int ind, int low, int high, int l, int r)
{
    if (r < low or high < l)
        return 0;
    if (low >= l and high <= r)
        return seg[ind];

    int mid = (low + high) >> 1;
    int left = query(2 * ind, low, mid, l, r);
    int right = query(2 * ind + 1, mid + 1, high, l, r);
    return (left + right);
}

int32_t main()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> cs[i];

    build(1, 1, n);
    while (q--)
    {
        int type;
        cin >> type;
        int l, r;
        cin >> l >> r;
        if (type == 1)
        {
            update(1, 1, n, l, r), cs[l] = r;
        }
        // l--,r--;
        else
            cout << query(1, 1, n, l, r) << '\n';
    }
}