#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n, m; cin >> n >> m;
        vector<string> s(n);
        for(int i=0; i<n; i++)
            cin>>s[i];
        vector<int> marks(m);
        for(int i=0; i<m; i++)
            cin>>marks[i];

        int maxMarks = 0;
        for(int i=0; i<m; i++)
        {
            map<char, int> cnt;
            int maxCnt = 0;
            for(int j=0; j<n; j++)
                if(++cnt[s[j][i]] > maxCnt)
                    maxCnt = cnt[s[j][i]];

            maxMarks += maxCnt*marks[i];
        }
        cout<<maxMarks<<"\n";

}