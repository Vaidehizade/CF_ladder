#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<char>v;
    int f=0;
    if(s.size() <=2)
    {
        cout<<"No"<<endl;
    }
    else
    {
    for(int i=0; i<s.size();i++)
    {
        if(s[i]=='B' && ((s[i+1]=='A' && s[i+2]=='C') || (s[i+1]=='C' && s[i+2]=='A')))
        {
            f=1;
            break;
        }
        else if(s[i]=='A' && ((s[i+1]=='B' && s[i+2]=='C') || (s[i+1]=='C' && s[i+2]=='B')))
        {
            f=1;
            break;
        }
        else if(s[i]=='C' && ((s[i+1]=='A' && s[i+2]=='B') || (s[i+1]=='B' && s[i+2]=='A')))
        {
            f=1;
            break;
        }
    }
    if(f==0){
       cout<<"No"<<endl;
    }
    else
    {
      cout<<"Yes"<<endl;
    }
   }
}

// for(int i=2;i<s.size();i++)
//     if(s[i]*s[i-1]*s[i-2]==287430)return cout<<"Yes",0;
// cout<<"No";