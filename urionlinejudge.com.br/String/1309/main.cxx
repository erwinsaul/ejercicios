/*  Problem: Monetary Formatting
 *  Code: 1309
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: String
 */

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <set>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

string con(string n)
{
	string s;
	int i=0;
	for(int k=(n.length()-1);k>=0;k--)
	{
		if(i==3)
		{
			s.push_back(',');			
			i=0;
		}		
		s.push_back(n.at(k));
		i++;
				
	}
	return string(s.rbegin(),s.rend());
}

int main(int argc, char **argv)
{
    string 	n, c;
    while(cin>>n>>c)
    {
		if(c.length()==1)
		     c="0"+c;
		n=con(n);
		n="$"+n+"."+c;
		cout<<n<<endl;
	}
	return 0;
}

