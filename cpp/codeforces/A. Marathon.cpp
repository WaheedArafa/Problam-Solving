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
    ll a,b,c,d; cin >> a >> b >> c >> d;
	ll sum = 0;
	if (a < b)
	{
		sum++;
	}
	if (a < c)
	{
		sum++;
	}
	if (a < d)
	{
		sum++;
	}
	cout << sum << endl;
}
}