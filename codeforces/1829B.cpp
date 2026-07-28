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
    int n,j = 0,count_0 = 0;
    cin >> n;
    vector<int>v(n);
    vector<int>v2;
    for(int i = 0; i < n; i++) cin >>v[i];
    int max_length = 0, current_length = 0;
    for (int num : v) {
        if (num == 0) {
            current_length++;
            max_length = max(max_length, current_length);
        }
        else {
            current_length = 0;
        }
    }
    return max_length;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        cout << solve() <<endl;
    }
}
