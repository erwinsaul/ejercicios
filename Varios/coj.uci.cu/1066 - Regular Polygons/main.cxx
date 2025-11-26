/*   Problem:  Regular Polygons
 *   Code: 1066
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */


#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
	int t;
	double n,r,ap,p;
	double pi=acos(-1);	
	cin>>t;
	while(t--)
	{
		cin>>r>>n;
		p=2.0*n*r*tan(pi/n); //perimetro de un poligono dado lados y radio
		ap=2.0*n*r*sin(pi/n); // perimetro de un circulo dado radio y lados de un poligono
		printf("%.4f %.4f\n",ap,p);
	}
	return 0;
}

