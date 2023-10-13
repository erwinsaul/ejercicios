/*   Problem:  1680 - Garfield
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: string
 */


#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	string s,c;
	int f=0;
	while(cin>>s>>c)
	{
		while(1)
		{
			f=s.find(c);
			if(f==-1)
			   break;			
			s=s.substr(0,f)+s.substr(f+c.length(),s.length());
		}
		cout<<s<<endl;
	}
	return 0;
}

