#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    cin>>a>>b;
    int cnt=0;
    int n = abs(a-b)/2;
    //cout<<n<<endl;
    int sum=0;
    if(abs(a-b)==1)
    {
        cout<<1<<endl;
    }
    else if(abs(a-b) ==2)
    {
        cout<<2<<endl;
    }
    // else
    // {
    //   while(a!=b)
    // {
    //     if(a<b)
    //     {
    //         a = a+1;
    //         b= b-1;
    //         cnt = cnt+2;
    //         a= a+1;
    //         if(a!=b)
    //         {
    //         b= b-1;
    //         cnt= cnt+4;
    //         }
    //         else
    //         {
    //           cnt= cnt+2;
    //           break;
    //         }
    //         a = a+1;
    //         if(a!=b)
    //         {
    //         b= b-1;
    //         cnt = cnt+6;
    //         }
    //         else
    //         {
    //             cnt = cnt+3;
    //             break;
    //         }

    //     }
    //     else
    //     {
    //         b= b+1;
    //         a= a-1;
    //         cnt = cnt+2;
    //         b= b+1;
    //         if(a!=b)
    //         {
    //         a= a-1;
    //         cnt= cnt+4;
    //         }
    //         else
    //         {
    //           cnt= cnt+2;
    //           break;
    //         }
    //         b = b+1;
    //         if(a!=b)
    //         {
    //         a= a-1;
    //         cnt = cnt+6;
    //         }
    //         else
    //         {
    //             cnt = cnt+3;
    //             break;
    //         }
    //     }
    // }
    // cout<<cnt<<endl;
    // }
    else
    {
        int i,res=0;
        sum = (n*(n+1))/2;
        //cout<<sum<<endl;
        if(abs(a-b)%2==0)
        {
            cout<<2*sum<<endl;
        }
        else
        {
            res = 2*sum;
            cout<<(res+n+1)<<endl;
        }

    }
   
}