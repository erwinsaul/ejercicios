/*   Problem:  Substring Frequency
 *   Code: 2250
 *   Site: coj.uci.cu
 *   Status: Time Limit Exced
 *   type: String
 */


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int solve(string s, string c)
{
	int r=0;	
	int ts=s.length();
	int tc=c.length();
	string aux;
	for(int k=0;k<(ts-tc+1);k++)
	{
		aux=s.substr(k,tc);	
		if(c==aux)
		{
		  r++;
	    }
	}
	return r;
}


int main(int argc, char **argv)
{
	int t;
	string s,c;
	cin>>t;	
	for(int k=1;k<=t;k++)
	{
		cin>>s>>c;
		cout<<"Case "<<k<<": "<<solve(s,c)<<endl;
	}
	return 0;
}

