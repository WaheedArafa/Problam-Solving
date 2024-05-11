#include <bits/stdc++.h>
using namespace std;
int main(){
string n; cin >> n;
int x,y,z; x = n.size(); y = 0;
vector <int> s;
for (int i = 0; i < x; ++i)
{
    if (n[i] == '1' || n[i] == '4' && n[0] != '4')
    {
        z = 1;
        s.push_back(z);
    }
    if (n[i] == '4')
    {
        z = 1;
        s.push_back(z);
    }
    if (n[0] == '4')
    {
        z = 0;
        s.push_back(z);
    }
    else if (n[i] != '1' && n[i] != '4')
    {
        z = 0;
        s.push_back(z);
    }
    if (n[i] == '4' && n[i+1] == '4' && n[i+2] == '4')
    {
        z = 0;
        s.push_back(z);
    }
}
for (int i = 0; i < s.size(); ++i)
{
    if (s[i] == 0)
    {
        y = 1;
        cout << "NO";
        return 0;
    }
}
if (y == 0)
{
    cout << "YES";
}
} 