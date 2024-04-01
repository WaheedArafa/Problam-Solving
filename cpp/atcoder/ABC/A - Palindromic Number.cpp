#include <bits/stdc++.h>
using namespace std;
int main() {
string n;
cin >> n;
string x = n;
reverse(x.begin(), x.end());
if (n == x)
{
    cout << "Yes";
}
else
{
    cout << "No";
}
}