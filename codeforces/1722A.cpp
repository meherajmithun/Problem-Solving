
/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
#include<algorithm>
using namespace std;

string solve(){
    int n;
    string s;
    cin>>n>>s;
    sort(s.begin() , s.end());
    if(s == "Timru") return "YES";
    else return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}
