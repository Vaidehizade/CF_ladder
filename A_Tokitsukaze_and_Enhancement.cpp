#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0; cin>>n;
    if(n%4==0)
        cout<<1<<" "<<"A"<<endl;
    else if(n%4==1)
        cout<<0<<" "<<"A"<<endl;
    else if(n%4==3)
        cout<<2<<" "<<"A"<<endl;
    else if(n%4==2)
        cout<<1<<" "<<"B"<<endl;
}

// Category A if HP is in the form of (4n+1), that is, when divided by 4, the remainder is 1;
// Category B if HP is in the form of (4n+3), that is, when divided by 4, the remainder is 3;
// Category C if HP is in the form of (4n+2), that is, when divided by 4, the remainder is 2;
// Category D if HP is in the form of 4n, that is, when divided by 4, the remainder is 0.