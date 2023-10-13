/*  Problem: 12468 - Zapping
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Simulacion
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int a, b,may,mi,r;
	while(cin>>a>>b && a!=-1 && b!=-1)
	{
		may=0;
		mi=0;
		if(a>b)
		{
			may=100-a+b;
			mi=a-b;			
		}
		else if(b>a)
		{
			may=b-a;
			mi=100-b+a;
		}		
		r=min(may,mi);
	    cout<<r<<endl;
	}
	return 0;
}

