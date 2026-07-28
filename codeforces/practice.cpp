#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , m ; cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }


    vector<int>v2(m);
    for(int i = 0; i < m; i++) cin >> v2[i];

    int ans = 0;
    for(int i =0; i < n; i++){
        ans = 0;
        for(int j = 0; j < m; j++){
            ans += arr[i][j]*v2[j];
        }
        cout<<ans<<endl;
    }

}
