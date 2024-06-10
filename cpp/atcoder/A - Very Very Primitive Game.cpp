#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    if (c == 0)
    {
        for (int i = 0; i < a + b; i++)
        {
            a --;
            if (a == 0)
            {
                cout << "Aoki";
                return(0);
            }
            b--;
            if (b == 0)
            {
                cout << "Takahashi";
                return(0);
            }
        }
        
    }
    if (c == 1)
    {
        for (int i = 0; i < a + b; i++)
        {
            a --;
            if (a == 0)
            {
                cout << "Takahashi";
                return(0);
            }
            b--;
            if (b == 0)
            {
                cout << "Aoki";
                return(0);
            }
        }
    }
}