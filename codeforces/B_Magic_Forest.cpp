#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int cnt = 0;
    for(int i=1; i<=n; i++){
        for(int j=i; j<n+1; j++){
            int tmp = i^j;
            if(tmp >= j and i+j > tmp and tmp <= n) cnt++;
        }
    }
    cout<<cnt<<endl;
}