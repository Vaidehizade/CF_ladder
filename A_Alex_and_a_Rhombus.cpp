#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0; cin>>n;
    // if(n==1)
    // {
    //     cout<<1<<endl;
    // }
    // else
    // {
    //    while(n!=1)
    //    {
    //        sum += pow(2,n);
    //        n--;
    //    }
    //    cout<<sum+1<<endl;
        cout<<2 * n * (n - 1) + 1 <<endl;
}