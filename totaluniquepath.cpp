#include<bits/stdc++.h>
using namespace std;
int  uniquesol(int i,int j)
{
    if(i==0&&j==0) return 1;
    if(i<0||j<0) return 0;
    int l=uniquesol(i-1,j);
    int r=uniquesol(i,j-1);
    return l+r;
}



int UniquePath(vector<vector<int>>& arr,int i,int j)
{
    if(i==0&&j==0) return 1;
    if(i<0||j<0||arr[i][j]==-1) return 0;
    int l=UniquePath(arr,i-1,j);
    int r=UniquePath(arr,i,j-1);
    return r+l;
}
int UniquePath(vector<vector<int>>& arr,int n,int m)
{
    int dp[n][m];
   // dp[0][0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

            if(i==0&&j==0) dp[0][0]=1;
            else if(arr[i][j]==-1) dp[i][j]=0;
            else
            {
                int l=0;
                int r=0;
                if(i>0) l=dp[i-1][j];
                if(j>0) r=dp[i][j-1];
                cout<<l+r;
                 dp[i][j] = l+r; 
            }   
        } 
    }
    cout<<endl;
    return dp[n][m];
}                           
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v;
    // for(int i=0;i<n;i++)
    // {
    //     vector<int> v1;
    //     for(int j=0;j<m;j++)
    //     {
    //         int x;
    //         cin>>x;
    //         v1.push_back(x);
    //     }
    //     v.push_back(v1);
    // }
   int p= uniquesol(m-1,n-1);
   cout<<p;
}

