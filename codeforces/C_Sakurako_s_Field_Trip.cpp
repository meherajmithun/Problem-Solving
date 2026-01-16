#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>&v){
    int target ; cin >> target;
    vector<int>v2;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if((v[i] + v[j]) == target){
                v2.push_back(i+1);
                v2.push_back(j+1);
                break;
            }
        }
    }
    return v2;
}
int main(){
    vector<int>v;
    for(int i = 0; i <4; i++){
        int a ; cin >> a;
        v.push_back(a);
    }
    solve(v);
}