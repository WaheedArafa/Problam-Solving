#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define str string
#define vl vector<long long>
#define vs vector<string>
int main(){
ll t; cin >> t;
while (t--)
{
    ll a,b,c; cin >> a >> b >> c;
    if (a + b >= 10 || a + c >= 10 || b + c >= 10)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
}