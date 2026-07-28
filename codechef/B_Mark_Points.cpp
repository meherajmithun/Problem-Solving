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
    string s; cin>>s;
    bool bl = 0;
    int cnt = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1'){
            while(s[i] == '1' and i<s.size()){
                cnt++;
                i++;
            }
        }
        //cout<<cnt<<" ";
        if(s[i] == '0'){
            //cout<<cnt<<" ";
            if(cnt>0 and cnt<3){
                bl = 1;
                //break;
            }
            else cnt = 0;
        }
    }   
    if(cnt>0 and cnt<3) bl = 1;
    if(bl) cout<<"No\n";
    else cout<<"Yes\n";
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



#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e7+123;
bitset<N>isprime;
// isprime[i] = 1 --> prime
// isprime[i] = 0 --> Not prime

int32_t main(){
    for(int i = 3; i <= N; i += 2){
        isprime[i] = 1;
    }
    isprime[2] = 1;

    for(int i = 3; i <= sqrt(N); i += 2){
        if(isprime[i]){
            for(int j = (i * i); j <= sqrt(N); j += (2 * i)){
                isprime[j] = 0;
            }
        }
    }
    vector<int>prime;
    prime.push_back(2);
    for(int i = 3; i <= N; i += 2){
        if(isprime[i]){
            prime.push_back(i);
        }
    }
    for(auto u : prime) cout << u << " ";
}
