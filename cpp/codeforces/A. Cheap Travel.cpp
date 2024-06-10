#include <bits/stdc++.h>
using namespace std ;
int main() {
int n,m,a,b; cin >> n >> m >> a >> b;
int x = n/m;
int y = x*b;
int z = n%m;
if (z > 0)
{
    int a = z*x;
    cout << y + a;
    return 0;
}
cout << y;
}