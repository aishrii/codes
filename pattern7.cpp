//To print the following pattern
/*
      1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, r, c, d;
    cin >> n;
    for(r = 1; r <= n; r++)
    {
        d = r;
        for(c = 1; c <= 2 * n - 1; c++)
        {
            if(c >= 1 && c <= n - r)
            cout << " ";
            if(c >= n - r + 1 && c < n)
            cout << d++;
            if(c == n)
            {
                cout << d++;
                d--;
            }
            if(c >= n + 1 && c <= n + r - 1)
            cout << --d;
        }
        cout << "\n";
    }
    return 0;
}