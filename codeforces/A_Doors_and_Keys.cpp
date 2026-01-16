#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin>>tc;
    while(tc--){
        string s; cin>>s;
        int r=0,g=0,b=0;
        int ans = 0;
        for(int i=0; i<(int)s.size() ;i++){
            if(s[i] == 'g') g=1;
            if(s[i] == 'r') r=1;
            if(s[i] == 'b') b=1;
            if(s[i] == 'G'){
                if(g==1) {  ans++ ;}
                else { cout<<"NO"<<endl; break; }
                
            }
            else if(s[i] == 'B'){
                if(b == 1) {  ans++ ;}
                else { cout<<"NO"<<endl; break;}
                
            }
            else if(s[i] == 'R'){
                if(r == 1) { ans++ ;}
                else { cout<<"NO"<<endl;break ;}
                
            } 
            if(ans == 3) {
                cout<<"YES"<<endl;
                break;
            }
        }
    }
}