#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x;

    vector<string>s(n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i++])
        {
            cout << "No";
            return(0);
        }
        else if (s[i] != s[i++])
        {
            x = 1;
        }
    }
    if (x == 1)
    {
        cout << "Yes";
    }
}