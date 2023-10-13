#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{	
	int n;
	cin>>n;
	int v[n+1];
	int m[n+1];
	multimap<int, int> mm;
	multimap<int, int> it;
	for(int k=0;k<n;k++)
	{
		cin>>v[k];
	}
	memset(m,0,sizeof(m));
	for(int k=0;k<n;k++)
	{
		for(int i=k+1;i<n;i++)
		{
			if(v[k]<v[i])
			{
				m[k]++;
			}
			else if(v[k]>v[i])
			{
				m[i]++;
			}
		}
	}
	
	for(int k=0; k<n;k++)
	{
		cout<<m[k]+1<<" ";
	}
	return 0;
}

