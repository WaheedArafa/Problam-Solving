#include <bits/stdc++.h>
using namespace std;
int main() {
int t; cin >> t;
while (t--)
{
    int n,a,b; cin >> n >> a >> b;
    if (2*a<=b)
    {
        cout << a*n << endl;
    }
    else
    {
       int ans = (n/2) * b + (n%2) * a;
       cout << ans << endl; 
    }
}
}