/*  Problem: 11364 - Parking
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Ad-hoc
 */


#include <bits/stdc++.h>

using namespace std;


int main(int argc, char **argv)
{
	int t,n,r,ant,act;
	vector<int> v;
	cin>>t;	
	while(t--)
	{
		r=0;
		cin>>n;
		for(int k=0;k<n;k++)
		{
			cin>>r;
			v.push_back(r);
		}
		sort(v.begin(),v.end());
		ant=v[0];
		r=0;
		for(int k=1;k<n;k++)
		{
			act=v[k];			
			r=r+2*fabs(ant-act);
			ant=act;
		}
		cout<<r<<endl;
		v.clear();
		
	}
	return 0;
}

