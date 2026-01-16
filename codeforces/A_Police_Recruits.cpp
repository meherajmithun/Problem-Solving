#include<bits/stdc++.h>
using namespace std;

void optimize(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
}
int main(){
	optimize();
	int n; cin >> n;
	int police=0,crime=0;
	vector<int>unsolve;
    bool solve = true;
	for(int i=0; i<n; i++){
		int a; cin >> a;
		if(a == -1){
			crime++;
			if(!solve){
				crime -= police;
				police=0;
			}
		}
		else{

			solve = false;
			police += a;
            unsolve.push_back(crime);
		}
    }
    unsolve.push_back(crime);
    // cout<<crime<<" ";
	cout<<*max_element(unsolve.begin(),unsolve.end())<<endl;
}