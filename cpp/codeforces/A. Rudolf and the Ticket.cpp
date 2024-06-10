#include <bits/stdc++.h>
using namespace std ;
int main(){
int t,n,m,k,sum;
cin >> t;
while (t--)
{
    cin >> n >> m >> k;
    sum = 0;
    vector <int> left (n);
    vector <int> right (m);
    for (int j = 0; j < n; j++)
    {
        cin >> left[j];
    }
    for (int g = 0; g < m; g++)
    {
        cin >> right[g];
        for (int a = 0; a < n; a++)
        {
            if (left[a] + right[g] <= k)
            {
                sum ++;
            }
        }
    }
    cout << sum << endl;
}
}