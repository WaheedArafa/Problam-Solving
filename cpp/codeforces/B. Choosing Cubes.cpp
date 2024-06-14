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
    ll n,f,k; cin >> n >> f >> k;
    f--; k--;
    vl a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll x = a[f];
    sort(a.begin(), a.end(), greater<int>());
    if (a[k] > x) {
        cout << "NO\n";
    } 
    else if (a[k] < x) {
        cout << "YES\n";
    }
    else {
        if (k == n - 1 || a[k + 1] < x) {
            cout << "YES" << endl;
        } 
        else {
            cout << "MAYBE" << endl;
    }
}
}
}