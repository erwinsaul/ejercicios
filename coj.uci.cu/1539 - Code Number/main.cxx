/*  Problem:  1539 - Code Number
 *  Site: coj.uci.cu
 *  Status: Accepted
 *  Type: String
 */



#include <bits/stdc++.h>

using namespace std;

char code(char c)
{
	switch(c)
	{
		case '1': return 'I'; break;
		case '2': return 'Z'; break;
		case '3': return 'E'; break;
		case '4': return 'A'; break;
		case '5': return 'S'; break;
		case '6': return 'G'; break;
		case '7': return 'T'; break;
		case '8': return 'B'; break;
	   	case '9': return 'P'; break;
	   	case '0': return 'O'; break;
	}
	return c;
}

int main(int argc, char **argv)
{
	int n,j;
	string s;
	getline(cin,s);
	istringstream ss(s);
	ss>>n;
	j=0;
	bool flag=false;
	while(j<n)
	{
		if(flag)
		     cout<<endl;
		flag=true;
		while(getline(cin,s))
		{
		  if(s.length()==0)
		  {
			  
		   break;		   
	      }		
		  for(int k=0;k<(int)s.length();k++)
		  {
			  cout<<code(s.at(k));
		  }		  
		  cout<<endl;
	    }
	    j++;
	}
	return 0;
}

