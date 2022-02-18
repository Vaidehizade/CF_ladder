#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
      cin>>arr[i];
    int cnt=count(arr,arr+n,1);
    int cnt2=count(arr,arr+n,-1); 
    int mx=INT_MIN;
    for(int i=0;i<k;i++)
    {
        int temp=cnt,temp2=cnt2;
        for(int j=i;j<n;j+=k)
        {
            if(arr[j]==1)
            {
                temp--;
            }
            else
            {
                temp2--;
            }
        }

        mx=max(mx,abs(temp-temp2));
    }
    cout<<mx<<endl;

}