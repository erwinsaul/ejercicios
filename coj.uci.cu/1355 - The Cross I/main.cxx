/*  Problem:    1355 - The Cross I
 *  Site: coj.uci.cu
 *  Status: Accepted
 *  Type: Geometria
 */


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	double pi=acos(-1);
	double base, altura, l,r,tri,cir,area;
	while(cin>>l)
	{
	  base=l/3.0;
	  altura=l/2.0;
	  r=base;
	  tri=(base*altura)/2.0;
	  cir=pi*r*r;
	  area=l*l-4*tri-4*(cir/4.0);
	  printf("%.4f\n",area);	  
    }
	return 0;
}

