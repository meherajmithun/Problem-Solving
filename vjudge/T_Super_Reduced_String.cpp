#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int main(){
    fast();
    string s; cin >> s;
    string ans;
    for(int i=0; i<(int)s.size(); i++){
        if(s[i] == s[i+1]){
            cout<<i<<endl;
            s.erase(s.begin()+i);
            i += 1;
            s.erase(s.begin()+i);
            i=0;
        }
        else{
            ans.push_back(s[i]);
        }
        cout<<s<<endl;
    }
    cout<<s<<endl;
    cout<<s<<ans<<ans.size()<<endl;
    if(ans.size() == 0) cout<<"Empty String"<<endl;
    else cout<<ans<<endl;
}