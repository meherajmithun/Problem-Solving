/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

string solve(){
    string s;
    cin >> s;

    if(s.length() >= 3 && s[0] == '1' && s[1] == '0'){

        if(s[2] == '1' && s.size() == 3){

            return "NO";
        }

        else if(s[2] >= '1'){

            return "YES";
        }

        else if(s[2] == '0') return "NO";
    }

    return "NO";
}

int main(){
    fastIO;
    int T;
    cin >> T;
    while(T--){
        cout << solve() << endl;
    }
}

