#include <bits/stdc++.h>
using namespace std;
int main() {
  vector <string> a_to_z (26);
  a_to_z = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};

  string c;
  cin >> c;

  for (int i = 0; i <= 26; i++)
  {
    if (c == a_to_z[i])
    {
      i++;
      cout << a_to_z[i];
    }
  }
}