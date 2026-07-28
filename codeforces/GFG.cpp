#include<bits/stdc++.h>
using namespace std;

void size(set<int> &s){
    cout<<s.size()<<" ";
}
void count(set<int> &s,int x){
    if(s.count(x) == 1) cout<<1<<" ";
    else cout<<-1<<" ";
}
void erase(set<int> &s,int x){
    s.erase(x);
}
void print_contents(set<int> &s){
    for(auto u : s) cout<<u<<" ";
}
void insert(set<int> &s, int x){
    s.insert(x);
}
void solve(){
    int n,x; cin >> n;
    set<int>s;
    while(n--){
        char c; cin >> c;
//If c = a then insert x to the set.
        
        if(c == 'a'){
            cin >> x;
            insert(s,x);
        }
//if c = b print the contents of the set.
        else if(c == 'b'){
            print_contents(s);
        }
//if c == c the erase x from the set        

        else if(c == 'c'){
            cin >> x;
            erase(s,x);
        }
//if c = d then count x in the set
        
        else if( c == 'd'){
            cin >> x;
            count(s,x);
        }
//else c = e then print the size of the set.
        else {
            size(s);
        }
    }
    cout<<endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}