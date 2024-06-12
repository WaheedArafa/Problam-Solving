#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define str string
#define vl vector<long long>
#define vs vector<string>
int main(){
ll t; cin >> t;
str s = "Timur";
sort(s.begin(),s.end());
while (t--)
{
    ll n; cin >> n;
    str m; cin >> m;
    sort(m.begin(),m.end());
    if (m == s)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
}