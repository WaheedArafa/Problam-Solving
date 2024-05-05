#include <bits/stdc++.h>
using namespace std ;
int main(){
int n,x; cin >> n;
x = 0;
string opp; 
for (int i = 0; i < n; ++i)
{
    cin >> opp;
    if (opp == "X++" || opp == "++X")
    {
        x++;
    }
    else if (opp == "X--" || opp == "--X")
    {
        x--;
    }
}
cout << x;
}