/* problem:  2625 - Gift Problem
 * code: 2616
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char **argv)
{
	int n,m, t;
	cin>>n>>m;
	bool flag=false;
	
	for(int k=0;k<n;k++)
	{
		if(flag)
		  cout<<endl;
		for(int j=0;j<m;j++)
		{
			t = (k+j)%3;
			if(t==0)
			  cout<<"O";
			else if(t==1)
			  cout<<"I";
			else if(t==2)
			  cout<<"E";
		}
		flag = true;		
	}
	return 0;
}

