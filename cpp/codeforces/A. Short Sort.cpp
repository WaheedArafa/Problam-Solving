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
    if (s[0] == 'a' || (s[0] == 'b' && s[1] == 'a') || (s[0] == 'c' && s[1] == 'b'))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
}