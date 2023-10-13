/*   Problem: Creating Passwords I
 *   Code: 1825
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: string
 */

#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char **argv)
{
	int n;	
	string s,a;
	istringstream ss;
	getline(cin,s);
	bool flag=false,f=false;
	ss.str(s);
	ss>>n;
	while(n--)
	{
	 if(f)
	    cout<<endl;
	 f=true;
     ss.clear();
	 getline(cin,s);
	 ss.str(s);
	 ss>>a;
	 cout<<a.substr(0,3);
	 flag=false;
	 while(ss>>s)
	 {
		 if(flag)
		    cout<<"*";
		 flag=true;
		 cout<<s;
	 }
	 cout<<a.substr(3,a.length());
	}
	return 0;
}

