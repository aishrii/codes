//Member of fibonacci or not using recursive function
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0, chk;
    cin >> chk;
    for(int i = 3; i <= chk; i++)
    {
        if(fib(i) == c)
        {
            t = 1;
            break;
        }
        a = b;
        b = c;
    }
    if(t == 1)
    cout << "Member";
    else
    cout << "Not member";
    return 0;
}
int fib(int n)
{
    if(n == 1)
    return 0;
    else if(n == 2)
    return 1;
    else
    return fib(n - 1) + fib(n - 2);
}
//int *a - normal pointer(refrencing)
// *a - derefrencing 