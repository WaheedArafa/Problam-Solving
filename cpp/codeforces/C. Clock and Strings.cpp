#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define str string
#define vl vector<long long>
#define vs vector<string>
int main() {
ll t; cin >> t;
while (t--)
{
    ll a,b,c,d; cin >> a >> b >> c >> d;
    if ((a < c && c < b && b < d) || (b < d && d < a && a < c) || (c < a && a < d && d < b) || (d < b && b < c && c < a) || (a < d && d < b && b < c) || (b < c && c < a && a < d) || (d < a && a < c && c < b) || (c < b && b < d && d < a))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
}