/*  Problem: 12279 - Emoogle Balance 
 *  Site: uva.onlinejudge.org
 *  Status: Pending
 *  Type: String
 */


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int p,n,d;
	int t;
	int j=1;
	while(cin>>t && t)
	{
		p=0;
		n=0;
		for(int  k=0;k<t;k++)
		{
		 cin>>d;
		 if(d>0)
		   p++;
		 else
		  n++;
	    }
	    cout<<"Case "<<j<<": "<<p-n<<endl;
	    j++;
	}
	return 0;
}

