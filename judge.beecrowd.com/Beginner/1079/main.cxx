/*  Problem: Weighted Averages
 *  Code: 1079
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	double a,b,c,p;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		p=((2.0*a)+(3.0*b)+(5.0*c))/10.0;
		printf("%.1f\n",p);
	}
	
	return 0;
}

