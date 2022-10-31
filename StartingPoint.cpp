#include<bits/stdc++.h>
using namespace std;
int minimum(vector<vector<int>>& v,int n,int m)
{
    int dp[n][m];
    dp[0][0]=v[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int l=0;   
            int r=0;
            if(i==0 && j==0) dp[0][0]=v[0][0];   
            else if(i<0||j<0) return 999999;
            else
            {
                l =v[i][j]+ dp[i-1][j];
                r = v[i][j]+ dp[i][j-1];
                dp[i][j]=min(l,r);
            }
        }
    }
    return dp[n-1][m-1];
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        vector<int> v1;
        for(int j=0;j<m;j++)
        {
            int p;
            cin>>p;
            v1.push_back(p);
        }
        v.push_back(v1);
    }
    int c = minimum(v,n,m);
    cout<<c;
}




