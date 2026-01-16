/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int main(){
    optimize();
    int  n,ans=0;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int best = v[0];
    int worst = v[0];
    for(int i = 0; i < n; i++){
        if(v[i] > best){
            ans++;
            best = v[i];
        }
        else if(v[i] < worst){
            ans++;
            worst = v[i];
        }
    }
    cout<<ans<<endl;
}
