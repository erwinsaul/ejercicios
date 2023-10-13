/* problem: Max Volume
 * code: 2633
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	char q;
	double r, h, raux, resp;
	double pi=3.14159;
	cin>>n;
	while(n--)
	{
		cin>>q;
		if(q=='S')
		{
			cin>>r;
			raux = (pi*r*r*r*4.0)/3.0;
		}
		else if(q=='C')
		{
			cin>>r>>h;
			raux = (1.0/3.0)*pi*r*r*h;			
		}
		else //L
		{
			cin>>r>>h;
			raux = pi*r*r*h;
		}
		resp = max(resp, raux);
	}
	printf("%.3f", resp);
	return 0;
}

