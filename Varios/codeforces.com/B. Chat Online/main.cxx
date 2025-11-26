/* problem: B. Chat Online
 * code: 469
 * site: codeforces.com
 * status: Pending
 */
#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> ii;

int main(int argc, char **argv)
{
	int p,q,l,r,a,b,resp=0;	
	vector<ii> ab;
	vector<ii> cd;
	vector<ii>::iterator it;
	vector<ii>::iterator it1;
	cin>>p>>q>>l>>r;
	for(int k=0;k<p;k++)
	{
		cin>>a>>b;
		ab.push_back(ii(a,b));
	}	
	for(int k=0;k<q;k++)
	{
		cin>>a>>b;
		cd.push_back(ii(a,b));
	}
	
	for(int k=l;k<=r;k++)
	{
		for(it=cd.begin();it!=cd.end();it++)
		{
			a=(*it).first+k;
			b=(*it).second+k;
			cout<<a<<" "<<b<<endl;			
			for(it1=ab.begin();it1!=ab.end();it1++)
			{
				if(((*it1).first>=a && (*it1).first<=b) || ((*it1).second>=a && (*it1).second<=b) )
				   resp++;
			}
		}
	}
	cout<<resp;
	return 0;
}

