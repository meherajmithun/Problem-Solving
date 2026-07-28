/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) (a).begin(),(a).end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"

string solve(){
    vector<string>s(3);
    for(int i = 0 ; i < 3; i++) cin >> s[i];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(s[i][j] == '?'){
                if(j == 0){
                    if((s[i][j+1] == 'A' and s[i][j+2] == 'B') || (s[i][j+1] == 'B' and s[i][j+2] == 'A')){
                        return "C";
                    }
                    if((s[i][j+1] == 'A' and s[i][j+2] == 'C') || (s[i][j+1] == 'C' and s[i][j+2] == 'A')){
                        return "B";
                    }
                    if((s[i][j+1] == 'B' and s[i][j+2] == 'C') || (s[i][j+1] == 'C' and s[i][j+2] == 'B')){
                        return "A";
                    }
                }
                if(j == 1){
                    if((s[i][j-1] == 'A' and s[i][j+1] == 'B') || (s[i][j-1] == 'B' and s[i][j+1] == 'A')){
                        return "C";
                    }
                    if((s[i][j-1] == 'A' and s[i][j+1] == 'C') || (s[i][j-1] == 'C' and s[i][j+1] == 'A')){
                        return "B";
                    }
                    if((s[i][j-1] == 'B' and s[i][j+1] == 'C') || (s[i][j-1] == 'C' and s[i][j+1] == 'B')){
                        return "A";
                    }
                }           
                if(j == 2){
                    if((s[i][j-1] == 'A' and s[i][j-2] == 'B') || (s[i][j-1] == 'B' and s[i][j-2] == 'A')){
                        return "C";
                    }
                    if((s[i][j-1] == 'A' and s[i][j-2] == 'C') || (s[i][j-1] == 'C' and s[i][j-2] == 'A')){
                        return "B";
                    }
                    if((s[i][j-1] == 'B' and s[i][j-2] == 'C') || (s[i][j-1] == 'C' and s[i][j-2] == 'B')){
                        return "A";
                    }
                }
            }
        }
    }
}

int main() {
    fastIO;
    int T;
    cin >> T;
    while (T--) {
        cout<<solve()<<endl;;
    }
    return 0;
}