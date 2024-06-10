#include <bits/stdc++.h>
using namespace std;
int main(){
string s1,trans; cin >> s1 >> trans;
reverse(s1.begin(), s1.end());
if (s1 == trans)
{
    cout << "YES";
}
else
{
    cout << "NO";
}
}