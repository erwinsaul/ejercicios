/*  Problem:   1857 - The Knights Of The Round Table
 *  Site: coj.uci.cu
 *  Status: Accepted
 *  Type: Geometria
 */



#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	double a,b,c;
	double s,r2,r;
	while(cin>>a>>b>>c)
	{
		r=0.0;
		s=(a+b+c)/2.0+1e-8;//EPS
		r2=(s-a)*(s-b)*(s-c);
		r=sqrt(r2/s);				 	    
	    printf("The radius of the round table is: %.3f\n",r);
	}
	return 0;
}

