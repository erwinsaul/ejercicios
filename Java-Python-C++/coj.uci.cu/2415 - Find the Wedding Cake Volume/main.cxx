/*   Problem:  Find the Wedding Cake Volume
 *   Code: 2415
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Geometria
 */


#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	double pi=acos(-1);
	double v;
	int r,a,t,n;
	cin>>t;		
		for(int k=0;k<t;k++)
		{
			cin>>n;
			v=0;
			for(int i=0;i<n;i++)
			{
				cin>>r;
				cin>>a;
				v=v+pi*r*r*a;
			}
            printf("%.2f\n",v);
		}
	return 0;
}

