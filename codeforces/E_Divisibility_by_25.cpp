//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define nl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
#define double long double
#define mod 1000000007

void solve() {
     string s; cin>>s;
     int n = s.size(),i=0 , j=0;
     int cnt = 0;
     for(i=n-1; i>=0; i--){
        if(s[i] == '5' or s[i] == '0'){
            break;
        }
     }
     if(i == -1){
        cout<<-1<<endl;
     }
     else if(s[i] == '5'){
        for(j=n-1; j>=0; j--){
            if(s[j] == '7' or s[j] == '2' or s[j] == '0'){
                break;
            }
        }
        if(j == -1){
            cout<<-1<<endl;
        }
        else{
           // cout<<i<<" "<<j<<endl;
            if(s[j] == '7' or s[j] == '2'){
                //cout<<"Ekhane"<<endl;
                //cout<<n<<" "<<i<<" "<<j<<endl;
                cout<<(n-i-1)+(n-j-1)<<endl;
            }
            else{
                if(i<j){
                    cout<<(n-j-1)+(n-i-2)<<endl;
                }
                else{
                    // i = 2
                    // j = 1
                    cout<<(n-j-1)+(n-i-1)<<endl;
                }
            }
         }
     }

     else if(s[i] == '0'){
        // i = 1
        // j = 0
        for(j=n-1; j>= 0; j--){
            if((s[j] == '0' and j != i)   or s[j] == '5'){
                break;
            }
        }
        if(j == -1){
            cout<<-1<<endl;
        }
        else{
            //cout<<i<<" "<<j<<endl;
            cout<<(n-i-1)+(n-j-2)<<endl; 
        }
     }
}

int32_t main() {
    slow;
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}