#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void remove_duplicate(int arr[],int n)
{
    int res=1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
        
    }
    print(arr,res);
}

int main()
{
int n = 9;
int arr[n] = {0,0,1,1,1,2,2,3,3};
remove_duplicate(arr,n);
return 0;
}