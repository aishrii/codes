//factorial series using function
#include <bits/stdc++.h>
using namespace std;
int fact(int );
int main()
{
    int n, s = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int f = fact(i);
        s = s + (f/i);
    }
    cout << s;
    return 0;
}
int fact(int n)
{
    int f = 1;
    for(int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}