#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;
    if(x < 5){
        cout<<-1<<"\n";
        return; 
    }
    if(x&1){
        cout<<(x-2)<<'\n';
    }
    else{
        cout<<(x-1)<<'\n';
    }

}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
