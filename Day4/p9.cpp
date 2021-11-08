#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, m;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    if(n % 2 == 0)
        m = n;
    else
        m = n - 1;
    for(int i = 0; i < m; i = i + 2)
    {
        swap(A[i], A[i + 1]);
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}