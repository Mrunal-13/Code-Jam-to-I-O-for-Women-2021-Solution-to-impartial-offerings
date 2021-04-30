#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int n;
		cin>>n;
		vector<int>s;
		for(int it=0;it<n;it++)
		{
			int p;
			cin>>p;
			s.push_back(p);
		}
		sort(s.begin(),s.end());
		for(int k=0;k<n;k++)
		{
			cout<<s[k];
		}
		cout<<endl;
		int sum=1;
		int c =1;
		for(int j=1;j<n;j++)
		{
			if(s[j-1]<s[j])
			{
				c++;
				sum=sum + (1*c);
			}
			else if (s[j-1]==s[j])
			{
				sum=sum+(c);
			}
		}
		cout<<"Case #"<<i<<": "<<sum<<endl;
	}
}