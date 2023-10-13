/* problem:  KLOPKA
 * code: 3026
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char **argv)
{
	int n, x, y;
	int xmin, ymin, xmax, ymax, m;
	cin>>n;
	xmin = INT_MAX;
	ymin = INT_MAX;
	xmax = INT_MIN;
	ymax = INT_MIN;
	while(n--)
	{
		cin>>x>>y;
		if(x<xmin)
		{
			xmin = x;
		}
		if(x > xmax)
		{
			xmax = x;
		}
		if(y < ymin)
		{
			ymin = y;
		}
		if(y > ymax)
		{
			ymax = y;
		}
	}
	
	x = fabs(xmax-xmin);
	y = fabs(ymax-ymin);
	m= x>y?x:y;
	cout<<m*m;
	return 0;
}

