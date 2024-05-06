/*  Problem: Exchanging Cards
 *  Code: 1104
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc
 */

#include <iostream>
#include <cstdio>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	set<int> a,b,i,d,v;
	set<int>::iterator it;
	int n,m,aux,x,y;
	while(cin>>n>>m)
	{
		if(m==0&&n==0)
		  break;
		for(int k=0;k<n;k++)
		{
			cin>>aux;
			a.insert(aux);
		}
		for(int k=0;k<m;k++)
		{
			cin>>aux;
			b.insert(aux);
		}
		set_intersection(a.begin(),a.end(),b.begin(),b.end(),inserter(v, v.begin()));
		set_difference(a.begin(),a.end(),v.begin(),v.end(),inserter(d, d.begin()));		
		x=d.size();
		d.clear();
		set_difference(b.begin(),b.end(),v.begin(),v.end(),inserter(d, d.begin()));		
		y=d.size();
		printf("%d\n",min(x,y));
		a.clear();
		b.clear();
		v.clear();
		d.clear();
	}
	return 0;
}

