/*   Problem: 2445 - Cannibal Strings
 *   Code: 2445
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: String
 */


#include <iostream>
#include <string>
#include <climits>
#include <cctype>

using namespace std;

bool come(char c, char s)
{
	if(isupper(c) && islower(s))
	   return true;
	else if(islower(c) && isupper(s))
	   return false;
	return ((int)c > (int)s);
}

int main(int argc, char **argv)
{
	int comida=0,mayor=INT_MIN;
	string s;
	getline(cin,s);	
	char c=s.at(0);
	char r;
	for(int k=1;k<(int)s.length();k++)
	{
		if(come(c,s.at(k)))
		{
		  comida++;
	    }
		else
		{
			if(comida>mayor)
			{
			   mayor=comida;
			   r=c;
		    }
		    c=s.at(k);
			comida=0;
		}
	}
	if(comida>mayor)
	{
	  r=c;
	}	
	cout<<r<<endl;
	return 0;
}

