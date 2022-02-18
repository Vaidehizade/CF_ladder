#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int cnt=0;
    if(n==1)
    {
        cout<<2<<endl;
    }
    else
    {
        for(int i=0; i<n-1; i++)
        {
           if(abs(arr[i+1]-arr[i]) > 2*d)
            cnt += 2;
           else if(abs(arr[i+1]-arr[i]) == 2*d)
             cnt++;
       }
       cout<<cnt+2<<endl;
    }
}