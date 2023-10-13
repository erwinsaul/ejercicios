/* Problem: Dragons
 * Code: 230A
 * Site: codeforces.com
 * Status: Accepted
 *  * Type: Simulacion
 */

#include <iostream>
#include <map>

using namespace std;

int main(int argc, char **argv)
{
	multimap<int,int> m;
	multimap<int,int>::iterator it;
	int s,n,a,b;
	cin>>s>>n;
	for(int k=0;k<n;k++)
	{
		cin>>a>>b;
		m.insert(pair<int,int>(a,b));
	}
	bool win=true;
	for(it=m.begin();it!=m.end();++it)
	{
		if(s>(*it).first)
		{
			win=true;
			s=s+(*it).second;
		}
		else
		{
			win=false;
			break;
		}		
	}
	if(win)
	   cout<<"YES"<<endl;
	else
	   cout<<"NO"<<endl;
	return 0;
}

