#include<bits/stdc++.h>
using namespace std;

void solve(){
int n;
    cin>>n;
    int s,x;
    cin>>s>>x;
    vector<int>v(n);
    for(auto &i : v) cin>>i;
    int sum=0;

    for(auto i : v) sum += i;

    if(s==sum){
        cout<<"YES"<<endl;
        return ;
    }
    if(sum>s){
        cout<<"NO"<<endl;
        return;
    }
    int k = s-sum;
    if(k%x==0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}



int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }


}