/*  Problem: 10041 - Vito's Family
 *  Site: uva.onlinejudge.org
 *  Status:Accepted
 *  Type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int e,f,c,n;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>e>>f>>c;
		e=f+e;
		n=0;
		while(e>=c)
		{
			n=n+e/c;		    
			e=e/c+e%c;			
		}
		cout<<n<<endl;
		
	}
	return 0;
}

