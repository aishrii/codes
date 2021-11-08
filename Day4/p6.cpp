#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int d, md, M[n];
    for(int i = 0; i < n; i++)
    {
        md = A[i];
        for(int j = i + 1; j < n; j++)
        {
            d = abs(A[i] - A[j]);
            if(md > d)
            {
                md = d;
            }
        }
        M[i] = md;
    }
    sort(M, M + n);
    cout << M[0];
    return 0;
}