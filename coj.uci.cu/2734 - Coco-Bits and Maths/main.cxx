/* problem: Coco-Bits and Maths
 * code: 2734
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	int n,r=0;
	string s;
	while(cin>>s>>n)
	{
		if(s.compare("suma")==0)
		  r = r + n;
		else
		  r = r - n;
	}
	cout<<"resultado: "<< r;
	return 0;
}

