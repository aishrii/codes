//WAP to find second largest number among given n number without using array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    int l = 0, sl = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a;
        if(l < a)
        {
        sl = l;
        l = a;
        }
        else if(a > sl)
        sl = a;
    }
    cout << sl;
    return 0;
}