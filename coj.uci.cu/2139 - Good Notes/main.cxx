/*   Problem: 2139 - Good Notes 
 *   Code: 2139
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
	string s,c,aux;
	int p;
	while(cin>>s>>c)
	{
		p=0;
		aux="";
		for(int k=0;k<(int)s.length();k++)
		{
			p=c.find(s.at(k),p);			
		    if(p==-1)
		       break;
		    else
		       aux.push_back(c.at(p));
		    p++;
		}		   
		if(aux==s)
		   cout<<"Yes"<<endl;
		else
		   cout<<"No"<<endl;
		
	}
	return 0;
}

