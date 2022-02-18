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
    int n; cin>>n;
    vector<int>v;
    int num=0,sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>num;
        v.push_back(num);
        sum += num;
    }
   int cost=0, mn = INT_MAX;
   int arr[100] ={0};
  for(int t=1; t<101; t++)
   {
       cost=0;
       for(int i=0; i<n; i++)
       {
         if(v[i] > t)
         {
           cost += v[i]-(t+1);
         }
         else if(v[i] <t)
         {
             cost += (t-1)-v[i];
         }
       }
       arr[t-1] = cost;
       mn = min(mn,cost);
   }
   int t=0;
   //auto t= find(arr, arr+100, mn);
   for(int i=0; i<100; i++)
   {
       if(arr[i] ==mn)
       {
           t= i+1;
           break;
       }
   }
   cout<<(t)<<" "<<mn<<endl;
//    else
//    {
//        int t = floor(sum/(double)n);
//        int cost1=0,cost2=0;
//         for(int i=0; i<n; i++)
//        {
//          if(v[i] > t)
//          {
//            cost1 += v[i]-(t+1);
//          }
//          else if(v[i] <t)
//          {
//             cost1 += (t-1)-v[i];
//          }
//        }

//         int t1 = ceil(sum/(double)n);
//         for(int i=0; i<n; i++)
//        {
//          if(v[i] > t1)
//          {
//            cost2 += v[i]-(t1+1);
//          }
//          else if(v[i] <t1)
//          {
//             cost2 += (t1-1)-v[i];
//          }
//        }

//        if(cost1 > cost2)
//        {
//            cout<<t1<<" "<<cost2<<endl;
//        }
//        else
//        {
//            cout<<t<<" "<<cost1<<endl;
//        }

//    }
}