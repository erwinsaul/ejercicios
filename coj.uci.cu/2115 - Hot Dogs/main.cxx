/*  Problem: Hot Dogs
 *  Code: 2115 - Hot Dogs
 *  Site: coj.uci.cu
 *  Status: Accepted
 *  Type: Ad-Hoc
 */


#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char **argv)
{
	double h,p;
	while(cin>>h>>p)
	{
		printf("%.2f\n",(h/p));
	}
	return 0;
}

