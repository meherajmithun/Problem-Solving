/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/
#include<bits/stdc++.h>
using namespace std;

int solve(){
    int a,n;
    cin>>n;
    vector<int>v;
    for(int i = 0; i < n; i++){
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin() , v.end());
    int size = unique(v.begin() , v.end()) - v.begin();
    return size;

}
int main(){
	int t;
	cin>>t;
	while(t--){
		cout<<solve()<<endl;
	}
}
