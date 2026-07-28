#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void optimize(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

void clocks(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    string s;
    for(int i=1; i<=12; i++){
        if(i == a or i == b) s+="a";
        if(i == c or i == d) s+="b";
    }
    if(s == "abab" or s == "baba"){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int  main(){
    optimize();
    int tc ; cin >> tc;
    while(tc--){
        clocks();
    }
}