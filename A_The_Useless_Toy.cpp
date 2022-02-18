#include<bits/stdc++.h>
using namespace std;

void repeat();
int main()
{
    repeat();
    return 0;
}
void repeat()
{
    vector<char>v={'^','>','v','<','^','>','v','<'};  //cyclic
    char c1,c2;
    cin>>c1>>c2;
    unsigned long long  n,pos1,pos2; cin>>n;
    for(int i=0; i<4; i++)
    {
        if(v[i]== c1)
        {
            pos1 = i;
        }
        if(v[i]== c2)
        {
            pos2 = i;
        }
    }
    int t = n%4;
    if((pos1+t)%4== pos2 && (pos2+t)%4 ==pos1)
    {
         cout<<"undefined"<<endl;
    }
    else if((pos2+t)%4 ==pos1)
    {
        cout<<"ccw"<<endl;
    }
    else if((pos1+t)%4 == pos2 )
    {
         cout<<"cw"<<endl;
    }

}