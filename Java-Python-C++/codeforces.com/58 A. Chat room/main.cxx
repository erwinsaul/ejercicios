/*   Problem: A. Chat room
 *   Site: codeforces.com
 *   Status: Accepted
 *   type: String
 */

#include <bits/stdc++.h>

using namespace std;
int main(int argc, char **argv)
{
	int p=0;
	string s;
	string r="hello";
	cin>>s;
	bool flag=true;
	for(int k=0;k<5;k++)
	{
		p=s.find(r.at(k),p);		
		if(p<0)
		{
			flag = false;
			break;
		}
		p++;
	}
	if(flag)
	  cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
	return 0;
}

