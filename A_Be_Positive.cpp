#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int res=0;
   if(n%2==0)
   {
       res = n/2;
   }
   else if(n%2!=0)
   {
       res = (n/2+1);
   }
   int pos=0,neg=0;
   for(int i=0; i<n; i++)
   {
       if(arr[i] >0)
       {
           pos++;
       }
       else if(arr[i] <0)
       {
           neg++;
       }
   }
   if(pos >= res)
   {
       cout<<1<<endl;
   }
   else if(neg >= res)
   {
       cout<<-1<<endl;
   }
   else
   {
       cout<<0<<endl;
   }
   
}
  