#include <bits/stdc++.h>
using namespace std;
int main(){
#ifndef a
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
int n,shots; cin >> n; shots = 0;
vector<int>x(n);
for (int i = 0; i < n; ++i)
{
    cin >> x[i];
    if (n-1 > i)
    {
        shots += x[i]*i+1 + 1;
    }
}
cout << shots+1 << endl;
for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
        if (y[i] == x[j]) {
            cout << j+1 << " ";
        }
    }
}
}