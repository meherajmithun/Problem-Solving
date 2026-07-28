//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout<<x<<'\n'
#define mod 1000000007

vector<int>all_divisor(int n){
    vector<int>divisor;
    for(int i=2; (i*i) <= n; i++){
        if(n%i == 0){
            divisor.push_back(i);
            if(n/i != i) divisor.push_back(n/i);
        }
    }
    sort(divisor.begin() , divisor.end());
    return divisor;
}

void solve() {
    int n; cin>>n;
    vector<int>divisor = all_divisor(n);
   // for(auto u : divisor) cout<<u<<" ";
    for(int i=0; i<(int)divisor.size(); i++){
        int c = divisor[i];
        int l=i+1,r=divisor.size()-1;
        vector<int>ans;
        bool gese = true;
        while(l<r){
            int a = divisor[l];
            int b = divisor[r];
            int multiple = a*b*c;
            if(multiple == n){
                ans.push_back(a);
                ans.push_back(b);
                ans.push_back(c);
                gese = false;
                break;
            }
            else if(multiple<n){
                l++;
            }
            else{
                r--;
            }
        }
        if(!gese){
            cout<<"YES\n";
            sort(ans.begin() , ans.end());
            for(auto u : ans) cout<<u<<" ";
            cout<<endl;
            return;
        }
    }
    cout<<"NO\n";

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