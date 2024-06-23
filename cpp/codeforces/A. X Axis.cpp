#include <bits/stdc++.h>
using namespace std;
int main() {
int t; cin >> t;
while (t--)
{
    int x1,x2,x3; cin >> x1 >> x2 >> x3;
    int x[3] = {x1,x2,x3};
    sort(x,x+3);
    cout << x[2] - x[0] << endl;
}
}