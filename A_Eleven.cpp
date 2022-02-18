#include<bits/stdc++.h>
using namespace std;


bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
// Returns true if n is a Fibonacci Number, else false
bool isFibonacci(int num)
{
    // n is Fibonacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perfect square
    return isPerfectSquare(5*num*num + 4) ||
           isPerfectSquare(5*num*num - 4);
}
int main()
{
    int n; cin>>n;
    vector<char>v;
    for(int i=0; i<n; i++)
    {
       if(isFibonacci(i+1))
           v.push_back('O');
       else
           v.push_back('o');
    }
    for(int i=0; i<n; i++)
        cout<<v[i];
}