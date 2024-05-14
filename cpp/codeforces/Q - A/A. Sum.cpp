#include <bits/stdc++.h>
using namespace std ;
int main() {
int t; cin >> t;
int a,b,c;
while(t--)
{
    cin >> a >> b >> c;
    if (a == b + c || b == a + c || c == b + a)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
}