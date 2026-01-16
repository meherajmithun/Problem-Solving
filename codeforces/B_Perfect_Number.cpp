#include<bits/stdc++.h>
using namespace std;
const int mx=1e7;
vector<int>vis;

// 19 28 37 46 55 64 73 82 91 109 118 127 136 145 154 163 172 181 190
// 208 217 226 235 244 253 262 271 280 307 316 325 334 343 352 361 370
// 406 415 424 433 442 451 460 505 514 523 532 541 550 604 613 622 631 640
// 703 712 721 730 802 811 820 901 1009 1018 1027 1036 1045 1054 1063 1072
// 1081 1090 1018

void calculation(int x){
   int sum = 0;
   int t = x;
   while(x > 0){
    sum += x%10;
    x/=10;
   }
   if(sum == 10) vis.push_back(t);
}

int main(){

    int i = 19;
    while(1){
        calculation(i);
        i += 9;
        if(i == mx) break;
    }

    int n; cin >> n;
    cout<<vis[n-1];

}