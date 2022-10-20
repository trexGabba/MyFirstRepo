/*output:
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
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
    int x=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<x<<" ";
            x++;
        }
        cout<<"\n";
    }
    return 0;
}