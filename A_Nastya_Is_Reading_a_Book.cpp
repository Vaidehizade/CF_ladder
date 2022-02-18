#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,k,cnt;cin>>t;
    int arr[101][2];
    for(int i=0; i<t; i++)
        for(int j=0; j<2; j++)
            cin>>arr[i][j];
    cin>>k;
    cnt=0;
    for(int i=0; i<t; i++)
    {
            if(arr[i][1] >=k)
                cnt++;
    }
    cout<<cnt<<endl; 
}