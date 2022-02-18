#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,a;
    cin>>l>>r>>a;
    if(l==0 && r==0 && a==0)
    {
        cout<<0<<endl;
    }
    else if(l==r && r==a && l==a)
    {
        if(l%2==0 && r%2==0 && a%2==0)
        {
             cout<<l+r+a<<endl;
        }
        else{
             cout<<l+r+a-1<<endl;
        }
    }
    else if(l==0 && r==0 && a!=0)
    {
        if(a%2==0)
        {
            cout<<a<<endl;
        }
        else 
        {
            cout<<a-1<<endl;
        }
    }
    else if(l==r && l!=0 && a==0) 
    {
         if((l+r)%2==0)
                {
                    cout<<l+r<<endl;
                }
                else
                {
                     cout<<l+r-1<<endl;
                }
    }
    else if(l==r && l!=0 && a!=0)
    {
        if(a%2==0)
        {
            cout<<l+l+(a/2)+(a/2)<<endl;
        }
        else
        {
            cout<<l+l+((a-1)/2)+((a-1)/2)<<endl;
        }
    }
    else
    {
        if(l<r)
        {
            l = l+a;
            if(l<r)
            {
                if((l+l)%2==0)
                {
                    cout<<l+l<<endl;
                }
                else
                {
                     cout<<l+l-1<<endl;
                }
            }
            else
            {
                 if((l+r)%2==0)
                {
                    cout<<l+r<<endl;
                }
                else
                {
                     cout<<l+r-1<<endl;
                }
            }
        }
        else if(r<l)
        {
            r = r+a;
            if(r<l)
            {
               if((r+r)%2==0)
                {
                    cout<<r+r<<endl;
                }
                else
                {
                     cout<<r+r-1<<endl;
                }
            }
            else
            {
                if((l+r)%2==0)
                {
                    cout<<l+r<<endl;
                }
                else
                {
                     cout<<l+r-1<<endl;
                }
            }
        }
    }
}