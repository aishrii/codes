//To print the following pattern
/*

                    * 
                   *  *  * 
                  *  *  *  *  * 
                 *  *  *  *  *  *  * 
                *  *  *  *  *  *  *  *  * 
               *  *  *  *  *  *  *  *  *  *  * 
              *  *  *  *  *  *  *  *  *  *  *  *  * 
             *  *  *  *  *  *  *  *  *  *  *  *  *  *  * 
            *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  * 
           *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  * 
          *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  * 
         *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  * 
        *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  * 
       *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  * 
      *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  * 
     *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  * 
    *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  * 
   *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  * 
  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  * 

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
       int n, a = 1;
       cin >> n;
       for(int i = 1; i <= n; i++)
       {
           for(int j = n - 1; j >= i; j--)
           {
               cout << " ";
           }
           for(int j = 1; j <= a; j++)
           {
               cout << " * ";
           }
           a = a + 2;
           cout << "\n";
       }
    return 0;
}