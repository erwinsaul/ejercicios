/* problem: Feedback
 * code: 1546
 * site: www.urionlinejudge.com.br
 * status:Accepted	
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,k,t;
	cin>>n;
	while(n--)
	{
		cin>>k;
		while(k--)
		{
			cin>>t;
			if(t==1)
			 puts("Rolien");
			else if(t==2)
			 puts("Naej");
			else if(t==3)
			 puts("Elehcim");
			else
			 puts("Odranoel");			
		}		
	}
	return 0;
}

