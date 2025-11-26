/*   Problem: 15611. Siempre Solo
 *   Code: 15611
 *   Site: bo.spoj.com
 *   Status: Accepted
 *   type: Math
 */


#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	map<char,int> m;
	int t,r;
	string s;
	while(cin>>t && t)
	{
		cin>>s;
		r=0;
		for(int k=0;k<t;k++)
		{
			m[s.at(k)]++;
		}
		for(int k=0;k<t;k++)
		{
			if(m[s.at(k)]==1)
			   r=(k+1);
		}
		cout<<r<<endl;
		m.clear();
	}
	return 0;
}

