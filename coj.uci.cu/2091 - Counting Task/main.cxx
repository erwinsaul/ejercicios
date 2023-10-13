/*   Problem:  Counting Task
 *   Code: 2091
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Map
 */

#include <iostream>
#include <map>
#include <string>
using namespace std;

char up(char c)
{
	if(isupper(c))
	   return tolower(c);
	return c;
}

int main(int argc, char **argv)
{
	int t;
	string s;
	map<char,int> m;
	cin>>t;
	while(t--)
	{
		cin>>s;
		for(int k=0;k<(int)s.length();k++)
		{
			m[s.at(k)]++;
		}
		cout<<m.size()<<endl;
		m.clear();
	}
	return 0;
}

