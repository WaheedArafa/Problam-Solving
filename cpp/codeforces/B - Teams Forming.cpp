#include <bits/stdc++.h>
using namespace std;
int main() {
int n,x; cin >> n; x = 0;
vector<int>a(n);
for (int i = 0; i < n; i++)
{
    cin >> a[i];
}
sort(a.begin(),a.end());
for (int i = 0; i < n; i+=2)
{
    int z = a[i+1] - a[i];
    x+=z;
}
cout << x;
}