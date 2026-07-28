#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {

        int n,h; cin>>n>>h;
        vector<int>v(n);
        for(auto &a : v) cin>>a;
        vector<int>cs(n),b(n);
        vector<ll> L(n), R_full(n);
        for(int i = 0; i < n; i++) {
            int mx = v[i];
            int mxSum = 0;
            for(int j = i; j >= 0; j--) {
                mx = max(mx, v[j]);
                mxSum += max(0, h - mx);
            }
            cs[i] = mxSum;
        }
        for(int i = 0; i < n; i++) {
            int mx = v[i];
            int mxSum = 0;
            for(int j = i; j < n; j++) {
                mx = max(mx, v[j]);
                mxSum += max(0, h - mx);
            }
            b[i] = mxSum;
        }
        
        
        vector<ll> pL(n+1, 0), pR(n+1, 0);
        
        
            vector<ll> rs(n, 0), mx_r(n, 0);
            
            for(int k = 0; k < n; k++) {
                mx_r[k] = v[k];
                rs[k] = L[k];
                
                for(int i = 0; i < k; i++) {
                    mx_r[i] = max(mx_r[i], v[k]);
                    rs[i] += max(0LL, h - mx_r[i]);
                }
                
                pL[k+1] = *max_element(rs.begin(), rs.begin()+k+1);
            }
        
        
        
            vector<ll> ts(n, 0), mx_l(n, 0);
            
            for(int k = n-1; k >= 0; k--) {
                mx_l[k] = a[k];
                ts[k] = R_full[k];
                
                for(int i = k+1; i < n; i++) {
                    mx_l[i] = max(mx_l[i], a[k]);
                    ts[i] += max(0LL, h - mx_l[i]);
                }
                
                pR[k] = *max_element(ts.begin()+k, ts.begin()+n);
            }
        
        
        ll ans = 0;
        for(int k = 0; k <= n; k++) {
            ans = max(ans, pL[k] + pR[k]);
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}