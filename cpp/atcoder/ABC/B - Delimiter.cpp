#include <bits/stdc++.h>
using namespace std;
int main() {
vector<int>a;
int z;
while(true)
{
    cin >> z;
    a.push_back(z);
    if (z == 0)
    {
        break;
    }
}
reverse(a.begin(), a.end());
for (int i = 0; i < a.size(); i++)
{
    cout << a[i] << endl;
}
}