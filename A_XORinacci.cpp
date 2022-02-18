#include<bits/stdc++.h>
using namespace std;

int nthXorFib(int n, int a, int b)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    if (n == 2)
        return (a ^ b);
 
    return nthXorFib(n % 3, a, b);
}
int main()
{
    int t,a,b,n; cin>>t;
    while(t--)
    {
       cin>>a>>b>>n;
        cout << nthXorFib(n, a, b)<<endl;
    }
}