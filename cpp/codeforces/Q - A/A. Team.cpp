#include <bits/stdc++.h>
using namespace std ;
int main(){
int n,y,z; cin >> n;
z = 0;
vector <int> x(3);
for (int i = 0; i < n; ++i)
{
    y = 0;
    for (int j = 0; j < 3; ++j)
      {
          cin >> x[j];
          if (x[j] == 1)
          {
              y ++;
          }
      }
    if (y >= 2)
    {
        z ++;
    }
}
cout << z;
}