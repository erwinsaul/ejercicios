/* Problem:Physical Experiments 
 * Code: 0024
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Math
 */

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	double v,h,d;
	int t;
	while(cin>>v)
	{
		d=0.0;
		t=1;
		h=(v*v)/(2.0*9.8);
		while(d<h)
		{
			d=d+5;
			t++;			
		}
		cout<<t<<endl;
	}
	
	return 0;
}

