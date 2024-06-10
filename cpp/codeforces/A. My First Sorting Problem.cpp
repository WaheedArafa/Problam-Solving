#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define vl vector<long long>
#define vs vector<string>
int main(){
ll t; cin >> t;
while (t--)
{
ll x,y; cin >> x >> y;
if (x < y)
{
    cout << x << " " << y << endl;
}
else
{
    cout << y << " "<< x << endl;
}
}
}