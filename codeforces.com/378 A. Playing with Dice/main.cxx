/* problem: A. Playing with Dice
 * code: 378
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int a, b, ga=0, e=0, gb=0, ra, rb;
	cin>>a>>b;
	for(int k=1;k<=6;k++)
	{
		ra=abs(a-k);
		rb=abs(b-k);
		if(ra<rb)
		{
			ga++;
		}
		else if(ra==rb)
		{
			e++;
		}
		else
		{
			gb++;
		}
	}
	cout<<ga<<" "<<e<<" "<<gb;
	return 0;
}

