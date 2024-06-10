#include <bits/stdc++.h>
using namespace std ;
int main(){
string s; cin >> s;
int s_lower,s_upper = 0;
for (int i = 0; i < s.size(); ++i)
{
    if (islower(s[i]))
    {
        s_lower++;
    }
    if (isupper(s[i]))
    {
        s_upper++;
    }
}
if (s_lower >= s_upper)
{
    for (int i = 0; i < s.size(); ++i)
    {
        cout << (char)tolower(s[i]);
    }
}
else if (s_lower < s_upper)
{
    for (int i = 0; i < s.size(); ++i)
    {
        cout << (char)toupper(s[i]);
    }
}
}