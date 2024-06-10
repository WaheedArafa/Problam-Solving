#include <bits/stdc++.h>
using namespace std ;
#define ll long long
int main() {
ll t,sum; cin >> t; 
while(t--)
{
    sum = 0;
    ll n;
    cin >> n;
    vector<ll>a(n);
    vector<ll>x(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        x[i] = a[i];
    }
    sort(a.begin(),a.end());
    for (ll i = 0; i < n; ++i)
    {
        if (a[i] != x[i] || n == 1)
        {
            sum++;
            break;
        }
    }
    if (sum > 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
}