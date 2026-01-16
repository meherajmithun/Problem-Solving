#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
// int x = -1;
// int t ; 

// bool call(int i, vector<int>&v , vector<int>&v2){
//     t = v[i]+v2[i];
//     if(x == -1){
//         x = t;
//         return 1;
//     }
//     else if(x != t){
//         return 0;
//     }
// }

void solve(){
	int n,k; cin>>n>>k;
    vector<int>v(n),v2(n);
    for(auto &u : v) cin>>u;
    for(auto &u : v2) cin>>u;
    int x = -1;
    bool gese = true;

    for(int i=0; i<n; i++){
        if(v2[i] != -1){
            int t = v[i]+v2[i];
            if(x == -1){
                x = t;
            }
            else if(x != t){
                gese = false;
                break;
            }
        }
    }
    if(!gese){
        cout<<0<<endl;
        return;
    }
    if(x == -1){
        int a = *max_element(v.begin() , v.end());
        int b = *min_element(v.begin() , v.end());
        b += k;
        if(a<=b){
            cout<<b-a+1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        for(int i=0; i<n; i++){
            int l = x-v[i];
            if(l < 0 or l > k){
                cout<<0<<endl;
                return ;
            }
        }
        cout<<1<<endl;
    }

}

int32_t main(){
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}