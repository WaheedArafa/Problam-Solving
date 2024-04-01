#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;

  if (n <= 9)
  {
    cout << "ABC";
    return(0);
  }
  else if (n >= 10 && n<= 99)
  {
    cout << "ABC";
    return(0);
  }
  else if (n >= 100 && n <= 999)
  {
    cout << "ABC";
    return(0);
  }
  
  if (n <= 1000 || n >= 1009)
  {
    cout << "ABD";
    return(0);
  }
  else if (n >= 1010 && n <= 1099)
  {
    cout << "ABD";
    return(0);
  }
  else if (n >= 1100 && n <= 1998)
  {
    cout << "ABD";
    return(0);
  }
}
  