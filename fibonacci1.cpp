//Print fibonacci series ....n terms
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 1, n;
    cin >> n;
    cout << a << " " << b << " ";
    for(int i = 3; i <= n; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}