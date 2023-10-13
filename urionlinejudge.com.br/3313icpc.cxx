#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	map<int, int> m;
	map<int, int> res;
	map<int, int>::iterator it;
	int k, n;
	cin>>k>>n;
	int s=0, d, r;
	for(int i=0;i<n;i++)
	{
		cin>>d;
		m[d]++;		
	}
	if(n % k == (k-1))
		s = (n+1) / k;
	else
		s = n / k;	
	for(int i=1;i<=k;i++)
	{			
		if(m.count(i) > 0)
			r = s - m[i];
		else
			r = s;
		
		if(r != -1 && r!=1 && r!=0)
		{
			cout<<"*"<<endl;
			return 0;
		}
		else
		{
			if(r==1)
			{
				if(res.count(1)>0)
				{
					cout<<"*"<<endl;
					return 0;
				}
				res[r]=i;
			}
			if(r==-1)
			{
				if(res.count(-1)>0)
				{
					cout<<"*"<<endl;
					return 0;
				}
				res[r]=i;
			}
		}
	}
	bool f = false;
	if(res.count(-1)>0)
	{
		cout<<"-"<<res[-1];
		f = true;
	}
	if(res.count(1)>0)
	{
		if(f)
			cout<<" ";
		cout<<"+"<<res[1];
	}
	cout<<endl;
	return 0;
}

