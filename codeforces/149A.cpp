/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int solve(){
    int n,a,count=0,k = 0;
    cin >> n;
    vector<int>v(12);
    for(int i = 0; i < 12; i++) cin >> v[i];
    if(n == 0) return 0;
    sort(v.rbegin() , v.rend());
    for(int i = 0; i < 12; i++){
        k += v[i];
        count++;
        if(k >= n) return count;
    }
    return -1;

}
int main(){
    optimize();
    cout<<solve()<<endl;
}
