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
    int sfh =0, ssh=0;
    int efh = (n/2)-1;

    for(i = 0; i <= efh; i++)
        sfh += A[i];
        
    for(i = efh + 1; i < n; i++)
        ssh += A[i];
        
    cout << sfh * ssh << "\n";
    return 0;
}