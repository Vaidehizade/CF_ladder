#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int mins = *min_element(arr.begin(),arr.end());
    int maxs = *max_element(arr.begin(), arr.end());
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] >mins && arr[i] < maxs)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}