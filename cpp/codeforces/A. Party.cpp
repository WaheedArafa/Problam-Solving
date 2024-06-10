#include <bits/stdc++.h>
using namespace std ;
int main() {
int n; cin >> n;
vector<int>p(n);
int sum = 0;
for (int i = 0; i < n; ++i)
{
    cin >> p[i];
}
for (int i = 0; i < n; ++i)
{
    if (p[i] == -1)
    {
        sum++;
    }
    else if (p[i] != -1)
    {
        for (int j = 0; j < n; ++j)
        {
            if (p[i] == p[j]&&i!=j)
            {
                sum++;
                p[j] = 0;
            }
        }
    } 
}
cout << sum;
}