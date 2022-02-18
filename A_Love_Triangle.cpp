#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,num; cin>>n;
int arr[n+1],found=0;
for(int i=1; i<=n; i++)
{
    int x; cin>>x;
    arr[i] = x;
}

for(int i=1; i<=n; i++)
{

    if(arr[arr[arr[i]]]==i)
    {
       found =1;
       break;
    } 
}
if(found==1)
{
     cout<<"YES"<<endl;
}
else
{
     cout<<"NO"<<endl;
}

}

// int a=arr[i]-1;
    // int b=arr[a]-1;
    // int c=arr[b]-1;
    //   if(i==c) 
    //   {
    //       found =1;
    //         break; 
    //   } 