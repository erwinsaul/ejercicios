/*   Problem: Diet
 *   Code: 2212
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: string
 */


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	
	int t,p;
	string s,a,b;
	bool sw;
	cin>>t;
	
	while(t--)
	{
		cin>>s>>a>>b;
		sw=true;		
		for(int k=0;k<(int)a.length();k++)
		{
			p=s.find(a.at(k));
			if(p==-1)
			   sw=false;
			s=s.substr(0,p)+s.substr(p+1,s.length());						
		}
		
		for(int k=0;k<(int)b.length();k++)
		{
			p=s.find(b.at(k));
			if(p==-1)
			   sw=false;
			s=s.substr(0,p)+s.substr(p+1,s.length());												
		}
		sort(s.begin(),s.end());
		if(sw)
		  cout<<s<<endl;
		else
		  cout<<"CHEATER"<<endl;
	}
	
	return 0;
}

