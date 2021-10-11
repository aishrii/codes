//Member of fibonacci or not
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 1, t = 0, chk;
    cin >> chk;
    for(int i = 3; i <= chk; i++)
    {
        int c = a + b;
        if(chk == c)
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