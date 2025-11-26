/*   Problem:  1376 - Neighbour
 *   Site: coj.uci.cu
 *   Status: WA
 *   type: string / Math
 */


#include <iostream>
#include <string>
#include <sstream>
#include <climits>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    string s,c;
    istringstream ss;
    long r,n,menor;
    cin>>s;
    ss.str(s);
    ss>>n;    
    int tam=s.length();
    int p;
    menor=INT_MAX;
    for(int k=0;k<tam;k++)
    {
		ss.clear();
		c="";		
		for(int j=0;j<tam;j++)
		{
			p=(j+k+1)%tam;
			c.push_back(s.at(p));
		}
		ss.str(c);
		ss>>r;		
		if(r>n)
		{
			menor=min(r,menor);			  
		}		
	}	
	if(menor==INT_MAX)
	  cout<<"0"<<endl;
	else
	  cout<<menor<<endl;
	return 0;
}

