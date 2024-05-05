#include <bits/stdc++.h>
using namespace std ;
int main(){
int n; cin >> n;
string s;
while(n--){
cin >> s;
if (s.size() > 10)
{
    cout << s[0] << s.size()-2;
    reverse(s.begin(), s.end());
    cout << s[0] << endl;
}
else if (s.size() <= 10)
{
    cout << s << endl;
}
}
}