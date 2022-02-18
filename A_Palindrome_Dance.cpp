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
    int n,a,b,num; cin>>n>>a>>b;
    vector<int>temp;
    for(int i=0; i<n; i++)
    {
       cin>>num;
       temp.push_back(num);
    }
        int j=n-1,cnt=0;
       for(int i=0; i<floor(n/(double)2); i++)
       {
          if(temp[i]!= temp[j])
          {
              if(temp[i]==2)
              {
                  if(temp[j]== 0)
                      cnt += a;
                  else
                      cnt += b;
              }
              else if(temp[j]==2)
              {
                  if(temp[i]== 0)
                      cnt += a;
                  else
                      cnt += b;
              }
              else 
              {
                  cout<<-1<<endl;
                  return;
              }
          }
          else
          {
             if(temp[i] == 2)
             {
                cnt += min(a,b)*2;
             }
          }
            j--;
         }
         if(temp[int(n/2)] == 2 && n%2!=0)
         {
              cnt += min(a,b);
         }
          cout<<cnt<<endl;
}
