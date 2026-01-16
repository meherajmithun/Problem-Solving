//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u : v) cin>>u;
    vector<int>v2 = v;
    sort(v2.begin() , v2.end());
    // for(auto u : v) cout<<u<<" "; cout<<endl;
    // for(auto u : v2) cout<<u<<" "; cout<<endl; 
    int idx = n/2;
    if(n%2 == 0) idx--;
    if(v[idx] == v2[idx] and n%2 == 0){
        cout<<-1<<endl;
        return;
    }  
    if(n%2 == 0){
        cout<<1<<" "<<n<<endl;
        return;
    }
    for(int i=0; i<n;){
        for(int j=i; j<n; j++){
            vector<int>tmp;
            if(i==0){
                for(int j=i+1; j<n; j++){
                    tmp.push_back(v[j]);
                }
                sort(tmp.begin() , tmp.end());
                int sz = (n-i-1)/2;
                sz--;
                if(v[sz] != tmp[sz]){
                    cout<<i+2<<" "<<n<<endl;
                    return;
                }
                i++;
                continue;
            }
            for(int j=i+1; j<n; j++){
                tmp.push_back(v[j]);
            }
            sort(tmp.begin() , tmp.end());
            int sz = (n-i-1)/2;
            sz--;
            if(v[sz] != tmp[sz]){
                cout<<i+1<<" "<<n<<endl;
                return;
            }
            i+=2;
        }
    }
    for(int i=n-1; i>=0;){
        for(int j=i-1; j>=0; j--){
            vector<int>tmp;
            if(i==n-1){
                for(int j=i-1; j>=0; j--){
                    tmp.push_back(v[j]);
                }
                sort(tmp.begin() , tmp.end());
                int sz = (n-i-1)/2;
                sz--;
                if(v[sz] != tmp[sz]){
                    cout<<1<<" "<<i-1<<endl;
                    return;
                }
                i--;
                continue;
            }
            for(int j=i-1; j>=0; j--){
                tmp.push_back(v[j]);
            }
            sort(tmp.begin() , tmp.end());
            int sz = (n-i-1)/2;
            sz--;
            if(v[sz] != tmp[sz]){
                cout<<1<<" "<<i-1<<endl;
                return;
            }
            i-=2;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1; cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}