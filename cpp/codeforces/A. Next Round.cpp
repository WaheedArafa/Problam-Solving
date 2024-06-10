#include <bits/stdc++.h>
using namespace std ;
int main(){
int n,k,sum; cin >> n >> k;
sum = 0;
vector <int> x(n);
for (int i = 0; i < n; ++i)
{
    cin >> x[i];
    if (x[i] > k)
    {
        sum ++;
    }
}
cout << sum;
}