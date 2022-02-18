#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name1,name2;
    cin>>name1>>name2;
    int n; cin>>n;
    cout<<name1<<" "<<name2<<endl;
    vector<vector<string>>v;
    vector<vector<string>>vec;
    string killed, rep_kill;
    while(n--)
    {
        cin>>killed>>rep_kill;
        if(killed == name1)
        {
            name1 =  rep_kill;
        }
        if(killed== name2)
        {
             name2 = rep_kill;
        }
        cout<<name1<<" "<<name2<<endl;
    }
   

}