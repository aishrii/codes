/*
To print the following pattern
      *
    * * *
  * * * * *
  * * * * *
    * * *
      *
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, r, c, d;
    cin >> n;
    for(r = 1; r <= n; r++)
    {
        for(c = 1; c <= n - r; c++)
            cout << " ";
        for(c = 1; c <= 2 * r - 1; c++)
            cout << "*";
        cout << "\n";
    }
    for(r = n; r >= 1; r--)
    {
        for(c = n - r; c >= 1; c--)
            cout << " ";
        for(c = 2 * r - 1; c >= 1; c--)
            cout << "*";
        cout << "\n";
    }
    return 0;
}