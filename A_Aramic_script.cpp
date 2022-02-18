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
    vector<string>v;
    string st;
    for(int i=0; i<n; i++)
    {
        cin>>st;
       set<char>s;
       int j=0;
       string ans="";
       while(j<st.size())
      {
        s.insert(st[j]);
        j++;
      }
      for(auto x: s)
      {
          ans +=x;
      }
     v.push_back(ans);
    }
    set<string>t;
    for(auto r: v)
    {
        t.insert(r);
    }
    cout<<t.size();
    

   
}

  // string str;
    // set<string>se;
    // while (n--)
	// {
	// 	cin >> str;
	// 	sort(str.begin(), str.end());
	// 	str.erase(unique(str.begin(), str.end()), str.end());
    //     cout<<str<<endl;
	// 	se.insert(str);
	// }
	// cout << se.size();