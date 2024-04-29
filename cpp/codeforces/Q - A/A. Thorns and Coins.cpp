#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
for (int i = 0; i < t; i++)
{
    int n;
    int x = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '@')
        {
            x++;
        }
        if (s[i] == '*' && s[i + 1] == '*')
        {
            break;
        }
    }
    cout << x << endl;
}
}