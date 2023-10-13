/* problem: Parsing Binary Strings
 * code: 2858
 * site: coj.uci.cu
 * status: wa
 */
#include <bits/stdc++.h>

using namespace std;

int bin_to_int(string s)
{
	int t=s.length();
	long r = 0;
	for(int k=0;k<t;k++)
	{
		r = r + pow(2, t-k-1)*(s.at(k)-48);
	}
	return r;
}
int main(int argc, char **argv)
{
	string s, aux;
	cin>>s;
	long l;
	aux = "";
	for(int k=0;k<(int)s.length();k++)
	{
		
		if(s.at(k)>='0' && s.at(k)<='1')
		{
			aux.push_back(s.at(k));
		}
		else
		{   
			if(aux.length()>0)
			{
			
			  l = bin_to_int(aux);
			  cout<< l % 1000000007 ;
			}
			cout<<s.at(k);			  
			aux="";		
		}
	}
	
	return 0;
}

