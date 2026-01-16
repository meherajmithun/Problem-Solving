/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int solve(int x1, int y1, int x2, int y2){
    double x = x2-x1;
	  x = x * x;
    double y = y2 - y1;
    y = y * y;
    double distance = sqrt(x + y);
    return distance;
}
int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << setprecision(9) << solve(x1,y1,x2,y2) << endl;
    
}

