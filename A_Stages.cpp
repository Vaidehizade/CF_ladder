#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
#include <vector>


using namespace std;
int main()
{
    int n, m;
	cin>>n>>m;
	vector<char> v;
	for(int i=0; i<n; i++)
	{
		char c;
		cin>>c;
		v.push_back(c);
	}
	sort(v.begin(), v.end());
	int ans = v[0] - 'a' + 1;
	int temp = ans;
	int cnt = 1;
 
	for(vector<char>::iterator i = v.begin() + 1; i < v.end(); i++)
	{
		if(cnt == m)
			break;
		int val = *i - 'a' + 1;
		if(val - temp >= 2)
		{
			ans += val;
			temp = val;
			cnt++;
		}
	}
 
	if(cnt != m)
	{
		cout<<-1;
	}
	else
	{
		cout<<ans;
	}
}