#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define str string
#define vl vector<long long>
#define vs vector<string>
int main(){
ll t; cin >> t;
str yesLower = "yes";
str yesUpper = "YES";
while (t--)
{
    str s; cin >> s;
    if (s[0] != 'y' && s[0] != 'Y') {cout << "NO\n";}
	else if (s[1] != 'e' && s[1] != 'E') {cout << "NO\n";}
	else if (s[2] != 's' && s[2] != 'S') {cout << "NO\n";}
	else {cout << "YES\n";}
}
}