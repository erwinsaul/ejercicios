//     Problem: Geometrical Task II
//     Site: coj.uci.cu
//     Code: 1493



#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
int main(int argc, char** argv)
{
	double a,b,r,pi,area;
	string cad;
	cin>>cad;
	pi=3.14;
	if(cad.compare("circle")==0)
	{
		cin>>r;
		area=pi*r*r;
	}
	if(cad.compare("triangle")==0)
	{
		cin>>a>>b;
		area=(a*b)/2;
	}
	if(cad.compare("rhombus")==0)
	{
		cin>>a>>b;
		area=(a*b)/2;
	}
	printf("%.2f\n",area);
	return 0;
}
