#include <bits/stdc++.h>
using namespace std;
int main() {
int t; 
cin >> t;
while (t--) {
    int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
    bool xIsWin = false; if (x1 > y1){xIsWin = true;}
    if ((x2 > y2 && xIsWin == true) || (y2 > x2 && xIsWin == false) || (x1 == x2 && y1 == y2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
}