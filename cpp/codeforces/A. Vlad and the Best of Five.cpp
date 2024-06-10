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
    str s;
    ll a = 0;
    ll b = 0;
    cin >> s;
    for (ll i = 0; i < 5; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        if (s[i] == 'B')
        {
            b++;
        }
    }
    if (a > b)
    {
        cout << "A\n";
    }
    if (a < b)
    {
        cout << "B\n";
    }
}
}