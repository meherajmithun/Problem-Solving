#include<bits/stdc++.h>
using namespace std;
#define int long long

bool call(int n){
    int tmp = sqrt(n);
    return tmp*tmp == n;
}

int32_t search(int sum , int j,vector<int>v, int n){
    for(int i=j; i<n; i++){
        sum += v[i];
        int t = sqrt(sum);
        if(t*t != sum){
            return i;
        }
        else{
            sum -= v[i];
        }
    }
    return n;
}

void solve(){
    int n; cin >> n;
    int t = (n*(n+1))/2;
    int k = sqrt(t);
    if(k*k == t){
        cout<<-1<<endl;
        return;
    }
    if(n == 3){
        cout<<"2 1 3"<<'\n';
        return;
    }
    vector<int>v(n);
    for(int i=0; i<n; i++){
        v[i] = i+1;
    }
  
    vector<int>perm(n);
    perm[0] = 2;
    perm[1] = 1;

    int sum = 3;
    for(int i=2; i<n; i++){
        sum += v[i];
        if(!call(sum)){
            perm[i] = v[i];
        }
        else{
            sum -= v[i];
            int idx = search(sum , i , v ,n);
            swap(v[i] , v[idx]);
            perm[i] = v[i];
            sum += v[i];
        }
    }
    for(auto u : perm) cout << u << " ";
    cout<<endl;
}

int32_t main(){
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}