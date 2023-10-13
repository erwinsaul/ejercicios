/*  Problem: 12503 - Robot Instructions
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Simulacion
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string s,s2;
	vector<string> v;
	int p=0;
	int t,k,i;
	cin>>t;
	while(t--)
	{
		cin>>k;
		p=0;
		for(int j=0;j<k;j++)
		{
			cin>>s;
			if(s.compare("SAME")==0)
			{
				cin>>s2>>i;
				s=v[i-1];
			}
			if(s.compare("LEFT")==0)
			{
				p--;
			}
			else
			   p++;
			v.push_back(s);
		}
		cout<<p<<endl;
		v.clear();
	}
	return 0;
}

