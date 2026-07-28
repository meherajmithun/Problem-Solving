//Generalised approach

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n' 
///1 2 3 4 5 6 7 8
///1 3 6 10 15 21 28 36
int n; 

int call(int k){
    int t = k*(k+1)/2;
    if(t < n) return 0;
    else return 1;
}

void solve(){
	cin>>n;
    int l=0,r=n,ans=-1;
    while(l <= r){
        int mid = (l+r)/2;
        if(call(mid) == 0){
            ans = mid;
            l=mid+1;
        }else {
            r = mid-1;
        }

    }
    ans++;
    //cout<<ans<<" "<<endl;
    int t = ans*(ans+1)/2;
    if(t == n) cout<<ans<<endl;
    else cout<<"NAI"<<endl;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int tc; cin>>tc;
	while(tc--){
		solve();
	}
}


//another solution
// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define endl '\n'

// void solve(){
// 	int n; cin>>n;
//     int l=0,r=n;
//     while(l <= r){
//         int mid = (l+r)/2;
//         int ans = (mid*(mid+1))/2;
//         if(ans == n){
//             cout<<mid<<endl;
//             return;
//         }
//         if(ans < n){
//             l = mid+1;
//         }
//         else{
//             r = mid-1;
//         }
//     }
//     cout<<"NAI"<<endl;
// }

// int32_t main(){
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);cout.tie(0);
	
// 	int tc; cin>>tc;
// 	while(tc--){
// 		solve();
// 	}
// }