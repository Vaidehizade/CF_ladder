#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,even1=0,odd1=0, even2=0,odd2=0; cin>>n>>m;
    vector<int>v1(n);
     vector<int>v2(m);
    for(int i=0; i<n; i++)
    {
          cin>>v1[i]; 
          if(v1[i]%2==0)
              even1++;
          else
             odd1++;
        
    }
    for(int i=0; i<m; i++) 
    {
        cin>>v2[i];  
         if(v2[i]%2==0)
              even2++;
          else
             odd2++;
    }
    
    cout<<min(even1, odd2) + min(even2,odd1)<<endl;
}



