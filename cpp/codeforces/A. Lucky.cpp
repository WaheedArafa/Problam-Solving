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
    str n; cin >> n;
	if (n[0] + n[1] + n[2] == n[3] + n[4] + n[5])
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
}
}