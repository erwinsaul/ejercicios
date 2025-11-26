/*   Problem:2458 - Numerüzka Trianglezlaya Sequence
 *   Code: 2458
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	unsigned long long n;
	while(cin>>n && n)
	{
		if(n==1)
		  cout<<"1"<<endl;
		else
		  cout<<ceil((sqrt(1+8*n)-1)/2)<<endl;
	}
	return 0;
}

