#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
vector<int>group_1(7);
group_1 = {1,3,5,7,8,10,12};
vector<int>group_2(4);
group_2 = {4,6,9,11};
vector<int>group_3(1);
group_3 = {2};
for (int i = 0; i <= 7; i++)
{
    if (x == group_1[i] && y == group_1[i])
    {
        cout << "Yes";
        return(0);
    }
    else
    {
        cout << "No";
        return(0);
    }
}
for (int i = 0; i <= 4; i++)
{
    if (x == group_2[i] && y == group_2[i])
    {
        cout << "Yes";
        return(0);
    }
    else
    {
        cout << "No";
        return(0);
    }
}
for (int i = 0; i <= 1; i++)
{
    if (x == group_3[i] && y == group_3[i])
    {
        cout << "Yes";
        return(0);
    }
    else
    {
        cout << "No";
        return(0);
    }
}
}