/*
 Problem: 3277 - Sowing Tomatoes Seeds.
 Site: coj.uci.cu
 Status: Accepted
 */


#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	int n,d,sw;
	vector<int> v;
	cin>>n;
	sw=1;
	for(int k=0;k<n;k++)
	{
		cin>>d;
		v.push_back(d);
	}
	sort(v.begin(), v.end());
	
	for(int k=1;k<(n-1);k++)
	{
		if((v[k]-v[k-1])!=(v[k+1]-v[k]))
		{
			sw=0;
			break;
		}
	}
	if(sw)
	  cout<<"YES";
	else
	  cout<<"NO";
	return 0;
}

