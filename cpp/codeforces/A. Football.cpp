#include <bits/stdc++.h>
using namespace std ;
int main() {
string x; cin >> x; int z;  z = 1;
for (int i = 0; i < x.size(); ++i)
{
    if(x[i] == x[i+1])
    {
        z++;
    }
    if (z >= 7)
    {
        cout << "YES";
        return 0;
    }
    if(x[i] != x[i+1])
    {
        z = 1;
    }
}
cout << "NO";
return 0;
}