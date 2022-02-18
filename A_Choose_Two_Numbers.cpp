#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>>arr[i];
    int m; cin>>m;
    int brr[m];
    for(int i=0; i<m; i++)
        cin>>brr[i];
    sort(arr, arr+n);
    sort(brr, brr+m);
    cout<<arr[n-1]<<" "<<brr[m-1]<<endl;
}
