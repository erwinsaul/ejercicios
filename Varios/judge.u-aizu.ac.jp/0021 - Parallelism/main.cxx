/* Problem: Parallelism
 * Code: 0021
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Geometria
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	double Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
	double m1,m2;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy>>Dx>>Dy;
		m1=(By-Ay)/(Bx-Ax);
		m2=(Dy-Cy)/(Dx-Cx);
		if(m1==m2)
		   cout<<"YES"<<endl;
		else
		   cout<<"NO"<<endl;
		
	}
	
	return 0;
}

