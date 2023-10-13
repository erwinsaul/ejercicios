/* problem: Guess What
 * code: 1547
 * site: www.urionlinejudge.com.br
 * status:Accepted	
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,t,s, v, menor, p;
	cin>>n;
	while(n--)
	{
		cin>>t>>s;		
		cin>>v;
		menor=abs(v-s);
		p=1;
		for(int k=1;k<t;k++)
		{
			cin>>v;
			if(abs(v-s)<menor)
			{
				p=k+1;
				menor=abs(v-s);			
			}
		}
		cout<<p<<endl;
	}
	return 0;
}
