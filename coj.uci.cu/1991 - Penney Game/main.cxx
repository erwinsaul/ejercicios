/*  Problem: Penney Game
 *  Code: 1991
 *  Site: coj.uci.cu
 *  Status: Accepted
 *  Type: String
 */

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int solve(string s)
{	
	if(s.compare("TTT")==0)
	   return 0;
	else if(s.compare("TTH")==0)
	   return 1;
	else if(s.compare("THT")==0)
       return 2;
	else if(s.compare("THH")==0)
	   return 3;
	else if(s.compare("HTT")==0)
	   return 4;
	else if(s.compare("HTH")==0)
	   return 5;
	else if(s.compare("HHT")==0)
       return 6;
    else
      return 7;	
}

int main(int argc, char **argv)
{
	int n, t;
	string s;
	cin>>n;
	int v[8];
	while(n--)
	{
		cin>>t>>s;
		cout<<t<<" ";
		memset(v,0,sizeof(v));
		for(int k=0;k<(s.length()-2);k++)
		{
			v[solve(s.substr(k,3))]++;
		}
		for(int k=0;k<8;k++)
		{
			 cout<<v[k];
			 if((k+1)<8)
			  cout<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

