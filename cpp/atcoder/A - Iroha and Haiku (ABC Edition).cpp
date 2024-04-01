#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    
    cin >> a>> b>> c;

    if (a == 5 || 7 && b == 5 || 7 && c == 5 || 7)
    {
        if (a == 5 && b == 5 && c == 5)
        {
            cout << "NO";
            return(0);
        }
        else if(a == 7 && b == 7 && c == 7)
        {
            cout << "NO";
            return(0);
        }
        else if(a == 7 && b == 7 && c == 5)
        {
            cout << "NO";
            return(0);
        }
        else if(a == 7 && b == 5 && c == 7)
        {
            cout << "NO";
            return(0);
        }
        else if(a == 5 && b == 7 && c == 7)
        {
            cout << "NO";
            return(0);
        }
        else{
            cout << "YES";
        }
    }
    else
    {
        cout << "NO";
    }
}