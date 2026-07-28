#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << '\n'
#define endl '\n'
void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
            
void solve(){
    int n; cin >> n;
    vector<int>v(n+1);
    //bool paisi = true;
    vector<int>visited(n+1);
    for(int i=1; i<=n; i++){
        cin >> v[i];
        visited[i] = i;
    }
    for(int i=1; i<=n; i++){
        if(v[i] < i){
            print(-1);
            return;
        }
        if(v[i] > i){
            swap(visited[i] , visited[v[i]]);
        }
    }
    for(int i=1; i<=n; i++){
        cout<<visited[i]<<" ";
    }
    cout<<endl;
}

int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}