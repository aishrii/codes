//To print the following pattern
/*

                   *                   
                  ***                  
                 *****                 
                *******                
               *********               
              ***********              
             *************             
            ***************            
           *****************           
          *******************          
         *********************         
        ***********************        
       *************************       
      ***************************      
     *****************************     
    *******************************    
   *********************************   
  ***********************************  
 ************************************* 
***************************************


*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, n, sp;
    cin >> n;
    for(r = 1; r <= n; r++)
    {
        for(sp = 1; sp <= n-r; sp++)
        {
            cout << " ";
        }
        for(c = 1; c <= (2*r - 1); c++)
        {
            cout << "*";
        }
        for(sp = 1; sp <= n-r; sp++)
        {
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
