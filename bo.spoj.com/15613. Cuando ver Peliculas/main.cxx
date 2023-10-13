/*   Problem: 15613. Cuando ver Peliculas
 *   Site: bo.spoj.com
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int precio[7]={30,20,20,10,20,20,30};
	int t,n,c;	
	vector<int> v;
	int total;
	cin>>t;
	while(t--)
	{
		cin>>c>>n;
		for(int k=1;k<=c;k++)
		{
			v.push_back(precio[k%7]);
		}
		sort(v.begin(),v.end());
		total=0;
		for(int k=0;k<n;k++)
		{
			total=total+v[k];
		}
		cout<<total<<endl;
		v.clear();
	}
	return 0;
}

