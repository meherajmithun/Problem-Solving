#include<bits/stdc++.h>
using namespace std;

int main() {
    int F1, P1, F2, P2;
    cin >> F1 >> P1 >> F2 >> P2;

    int diff1 = abs(F1 - P1);
    int diff2 = abs(F2 - P2);

    if (diff1 < diff2) {
        cout << "First" << endl;
    } else if (diff2 < diff1) {
        cout << "Second" << endl;
    } else {
        cout << "Both" << endl;
    }

    return 0;
}
