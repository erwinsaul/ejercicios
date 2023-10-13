/* Problem:Circles Intersection
 * Code: 0023
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Geometria
 */


#include <iostream>
#include <cmath>
#include <cstdio>
#define EPS 1e-9
using namespace std;
int main(int argc, char **argv)
{
	double Ax, Ay, Ar, Bx, By, Br, d;
	int n;
	cin>>n;
	
	while(n--)
	{
		cin>>Ax>>Ay>>Ar>>Bx>>By>>Br;
		
		d=sqrt(pow(Bx-Ax,2)+pow(By-Ay,2));
		
		if(Ar+Br+EPS<d)      puts("0");
        else if(d+EPS<Ar-Br) puts("2");
        else if(d+EPS<Br-Ar) puts("-2");
        else puts("1");
				
	}
	return 0;
}

