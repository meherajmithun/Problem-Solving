#include <bits/stdc++.h>
using namespace std;
#define int long long
 
struct Node {
    int sum, pre, suf, mx;
};
 
vector<int> a;
vector<Node> st;
 
Node merge(Node L, Node R) {
    Node res;
    res.sum = L.sum + R.sum;
    res.pre = max(0LL, max(L.pre, L.sum + R.pre));
    res.suf = max(0LL, max(R.suf, R.sum + L.suf));
    res.mx  = max({L.mx, R.mx, L.suf + R.pre});
    return res;
}
 
void build(int at, int l, int r) {
    if (l == r) {
        st[at].sum = a[l];
        st[at].pre = st[at].suf = st[at].mx = max(0LL, a[l]);
        return;
    }
    int mid = (l + r) >> 1;
    build(at<<1, l, mid);
    build(at<<1|1, mid+1, r);
    st[at] = merge(st[at<<1], st[at<<1|1]);
}
 
Node query(int at, int l, int r, int ql, int qr) {
    if (l > qr || r < ql) {
        return {0, 0, 0, 0};   // proper neutral node
    }
    if (l >= ql && r <= qr) return st[at];
    int mid = (l + r) >> 1;
    if (qr <= mid) return query(at<<1, l, mid, ql, qr);
    if (ql > mid)  return query(at<<1|1, mid+1, r, ql, qr);
    return merge(
        query(at<<1, l, mid, ql, qr),
        query(at<<1|1, mid+1, r, ql, qr)
    );
}
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, q;
    cin >> n >> q;
    a.resize(n+1);
    st.resize(4*n+4);
 
    for (int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
 
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << query(1, 1, n, l, r).mx << '\n';
    }
}