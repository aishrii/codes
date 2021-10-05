/*
To print the following pattern

J 
I J 
H I J 
G H I J 
F G H I J 
E F G H I J 
D E F G H I J 
C D E F G H I J 
B C D E F G H I J 
A B C D E F G H I J 

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, d, n;
    cin >> n;
    d = 64 + n;
    char d2 = char(d);
    for(r = 1; r <= n; r++)
    {
        for(c = 1; c <= r; c++)
        {
            cout << d2++ << " ";
        }
    
        d2 = 64 + n - r;
        cout << "\n";
    }
    
    return 0;
}