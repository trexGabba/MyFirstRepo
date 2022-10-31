#include<bits/stdc++.h>
using namespace std;
int UniquePath(vector<vector<int>>& v,int n)
{
    int dp[n][n];
    for(int j=0;j<n;j++)
        dp[n-1][j]= v[n-1][j];
    for(int i=n-2;i>=0;i--)
    {
        for(int j=i;j>=0;j--)
        {
            int d=0;
            int dg=0;
            d=v[i][j]+dp[i+1][j];
            dg=v[i][j]+dp[i+1][j];
            dp[i][j]=min(d,dg);
        }
    }
    return dp[0][0];
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    {
        vector<int>v1;
        for(int j=0;j<=i;j++)
        {
            int p;
            cin>>p;
            v1.push_back(p);
        }
        v.push_back(v1);
    }
    int c=UniquePath(v,n);
    cout<<c;
    return 0; 

}




