#include <bits/stdc++.h>
using namespace std;
int main() {
int n,x,sum,y;
cin >> n >> x;
sum = 0;
vector<int>s(n);
for (int i = 0; i < n; i++)
{
    cin >> s[i];
}
for (int i = 0; i < n; i++)
{
    if (s[i] <= x)
    {
        sum = sum + s[i];
    }
}
cout << sum;
}