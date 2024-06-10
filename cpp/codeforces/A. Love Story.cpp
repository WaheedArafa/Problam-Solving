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
    str s; cin >> s;
    str x = "codeforces";
    ll sum = 0;
    for (ll i = 0; i < 10; i++)
    {
        if (s[i] != x[i])
        {
            sum ++;
        }
    }
    cout << sum << endl;
}
}