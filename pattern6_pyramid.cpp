/*output:
          * 
        *   * 
      *   *   * 
    *   *   *   * 
  *   *   *   *   * 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1-i;j>0;j--)
        {
            cout<<"  ";
        }
        //just add extra space before star *
        for(int j=0;j<=i;j++)
        {
            cout<<"  * ";
        }
        cout<<"\n";
    }
    return 0;
}