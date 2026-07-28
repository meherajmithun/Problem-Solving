#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    
    multiset<ll> good_numbers;
    
    for (ll b = 1; b * b <= N; b += 2) { 
        ll max_a = log2(N / (b * b)) + 1;
        if (max_a < 1) continue;
        for (ll a = 1; a <= max_a; ++a) {
            ll x = (1LL << a) * b * b;
            if (x <= N) {
                good_numbers.insert(x);
            }
        }
    }
    
    cout << good_numbers.size() << endl;
    
    return 0;
}