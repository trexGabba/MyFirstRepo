#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int t;
    cin>>t;
    bool dp[n][t+1]={0};
    // for(int i=0;i<n+1;i++)
    // {
    //     for(int j=0;j<t+1;j++)
    //     {
    //         if(i==0&&j==0)
    //         {
    //             dp[i][j] = true;
    //         }
    //         else if(i==0)
    //         {
    //             dp[i][j] =false;
    //         }
    //         else if(j==0)
    //         {
    //             dp[i][j] =true;
    //         }
    //         else{
    //             if(dp[i-1][j]==true)
    //                 dp[i][j]=dp[i-1][j];
    //             else
    //             {
    //                 int v=arr[i-1];
    //                 if(j>=v)
    //                     if(dp[i-1][j-v]==true)
    //                         dp[i][j]=true;
    //             }
    //         }
    //     }
    // }
    // cout<<dp[n][t];

    // for(int i=0;i<n;i++) dp[i][0]=true;
    // dp[0][arr[0]]=true;
    // for(int i=1;i<n;i++)
    // {
    //     for(int j=1;j<t+1;j++)
    //     {
    //         bool no_take = dp[i-1][j];
    //         bool take=false;
    //         if(arr[j]<=t)
    //             take= arr[i]+dp[i-1][j-arr[i]];
    //         dp[i][j]=take|no_take;
    //     } 
    // }


     for(int i=0;i<n;i++)
    {
        for(int j=0;j<t+1;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<< dp[n-1][t];
}