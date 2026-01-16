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
    int n,k; cin>>n>>k;
    vector<int>v(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        sum += v[i];
    }
    if(sum % k != 0){
        print(n);
        return;
    }
    int tmp = sum;
    int j=n-1,l=0;
    int mx = -1;
    
    for(int i=0; i<n; i++){
        //cout<<sum<<" "<<tmp<<" "<<mx<<endl;;
        sum -= v[i];
        tmp -= v[j];
        if(sum % k != 0){
            mx = max(mx,n-i-1);
        }
        if(tmp % k != 0){
            mx = max(mx,n-l-1);
            j--;
            k++;
        }
    }


    //map<int,int>mp;
    // int l=0,r=0;
    // int sum = 0;
    // while(r<n){
    //     sum += v[r];
    //     if(sum % k == 0){
    //         while(l<=r and sum % k == 0){
    //             sum -= v[l];
    //             l++;
    //         }
    //     }
    //     mx = max(mx,r-l+1);
    //     r++;
    // }
    // if(mx == 0) mx = -1;
    print(mx);
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