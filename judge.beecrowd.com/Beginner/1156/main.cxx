/*  Problem: S Sequence II
 *  Code: 1156
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	double s=0.0;
	int n,ant=1;
	for(int k=1;k<=19;k++)
	{
		n=(2*(k+1)-1);
		ant=ant*2;		
		s=s+(double)n/(double)(ant);
	}
	s=s+1.0;
	printf("%.2f\n",s);
	return 0;
}

