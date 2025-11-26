/* problem: 1122 - Yeehaa!
 * code: 2570
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	double pi = acos(-1);
	int t;
	double R,n, resp;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		cin>>R>>n;
		resp = (R*sin(pi/n))/(1+sin(pi/n));
		cout<<"Scenario #"<<k<<":"<<endl;
		printf("%.3f\n\n", resp);
	}
	return 0;
}

