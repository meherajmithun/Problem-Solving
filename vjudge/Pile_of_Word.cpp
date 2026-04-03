#include <bits/stdc++.h>
using namespace std;

bool call(const string &s1, const string &s2) {
    if(s1.length() != s2.length()) return false; 

    int freq[26] = {0};

    for(char c : s1) freq[c - 'a']++;
    for(char c : s2) freq[c - 'a']--;  
    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) return false;
    }

    return true;
}
void solve(){
    string a, b;
    cin >> a >> b;
    if(call(a,b)) cout<<"YES\n";
    else cout<<"NO\n";
}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }
}