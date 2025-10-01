/*   Problem:  15615 - Hash
 *   Code: 15615
 *   Site: bo.spoj.com
 *   Status: Accepted
 *   type: Ad-hoc / String
 */

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char **argv)
{
	int t,j;
	string s;	
	istringstream ss;
	while(getline(cin,s))
	{
		ss.str(s);
		j=0;
		t=0;
		while(ss>>s)
		{
			for(int k=0;k<(int)s.length();k++)
			{
				t=s.at(k)-'A' + j + k + t;
			}
			j++;
		}
		cout<<t<<endl;
		ss.clear();
    }
	return 0;
}

