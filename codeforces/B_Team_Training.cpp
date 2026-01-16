#include<bits/stdc++.h>
using namespace std;

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int main(){
    slow();

	int tc; cin>>tc;
	while(tc--){
        solve()
    }
        int n , x; cin>> n >> x;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
    
        sort(a.rbegin() , a.rend());
        int res = 0 ,cnt=0;
        
        for(int i=0; i<n; i++){
            cnt++;
            if(a[i] * cnt >= x){
                res++;
                cnt=0;
            }
        }
        cout<<res<<endl;
	}
}