/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c ,n, extra;

    cin >> n;

    for (int i = 0;i<n;i++){
        cin >> a>>b>>c;
        if (b<c) {
            if (a==(2*abs(b-c)+b)) cout << 3<<endl;
            else if((a<(2*abs(b-c)+b))) cout << 1<<endl;
            else cout << 2 <<endl;
            }
        else {
            if (a==b) cout << 3<<endl;
            else if((a<+b)) cout << 1<<endl;
            else cout << 2 <<endl;

        }

    }

}

