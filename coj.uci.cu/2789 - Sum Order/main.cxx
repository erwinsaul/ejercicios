/* problem: Sum Order
 * code: 2789
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int v[4];
	v[1]= 0;
	v[2]=0;
	v[3] = 0;
	string s;
	char c;
	cin>>s;
	for(int k=0;k<(int)s.length();k++)
	{
		c = s.at(k);
		if(c!='+')
		{
			v[c-48]++;
		}
	}	
	for(int k=1;k<=3;k++)
	{
		
		for(int j=0;j<v[k];j++)
		{
			cout<<k;
			if(k!=3)
			{
				if(v[3]!=0)
				  cout<<"+";
				else
				{
					if((j+1)<v[k])
					{
						cout<<"+";
					}
				}
			}
			else
			{
				if((j+1)<v[k])
				  cout<<"+";
				
			}
		}
	}
	return 0;
}

