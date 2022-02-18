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
    string s;
    cin>>s;
    if(s.size()<=6)
    {
        cout<<"no"<<endl;
    }
    else
    {
        int cnt=0;
        for(int i=0; i<s.size(); i++)
       {
            if(s[i] == '1')
            {
                for(int j=i+1; j<s.size(); j++)
                {
                    if(s[j] == '0')
                    {
                        cnt++;
                    }
                    if(cnt>=6)
                    {
                     cout<<"yes"<<endl;
                     return;
                    }
                }
                break;
            }
        }
        cout<<"no"<<endl;
    }
}