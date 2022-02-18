#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,u1,h1,u2,h2;
    cin>>w>>h;
    cin>>u1>>h1;
    cin>>u2>>h2;
    while(h)
    {
        w+=h;
        if(h==h1)
        {
            w-=u1;
        }
        if(h==h2)
        {
            w-=u2;
        }
        if(w<0)
        {
            w=0;
        }
      h--;
    }
    cout<<w<<endl;
    return 0;
}
