/*  Problem: S Sequence
 *  Code: 1155
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	double s=0.0;
	for(int k=1;k<=100;k++)
	{
		s=s+1.0/(double)k;
	}
	printf("%.2f\n",s);
	return 0;
}

