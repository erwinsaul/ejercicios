/* problem: Climbing Worm
 * code: 1516
 * site: acm.tju.edu.cn
 * status:pendind
 */
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int n,u,d,t;
	double r;
	while(cin>>n>>u>>d &&(n || u || d))
	{
		r=0;
		t=0;
		while(t<n)
		{
			t=t+u;
			r=r+1.0;
			t=t-d;
			r=r+((d*60.0)/u)/60.0;
			cout<<t<<endl;
		}
		cout<<r<<endl;
	}
	return 0;
}

