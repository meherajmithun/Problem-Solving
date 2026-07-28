#include<bits/stdc++.h>
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int main(){
    slow();
    int n,m; cin >> n >> m;
    vector<string>s1(n),s2(n);
    for(int i=0; i<n; i++){
        cin >> s1[i] >> s2[i];
    }
    vector<string>t1(m),t2(m);
    for(int i=0; i<m; i++){
        cin >> t1[i] >> t2[i];
    }
    // for(int i=0; i<n; i++) cout<<s1[i]<<" "<<s2[i]<<endl;
    // for(int i=0; i<m; i++) cout<<t1[i]<<" "<<t2[i]<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            string s3 = t2[i];
            s3.pop_back();
            if(s3 == s2[j]){
                cout<<t1[i]<<" "<<t2[i]<<" #"<<s1[j]<<endl;
            }
        }
    }
}