#include <bits/stdc++.h>
using namespace std;
int main() {
int t,n,x,y;
cin >> t >> n;
vector <int> a(n);
for (int i = 0; i < t; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
        if (a[j] > 0)
        {
            x = x + a[j];
        }
        if (a[j] < 0)
        {
            y = y + a[j];
        }
    }
    cout << x - y;
}
}