/* Problem: Circumscribed Circle of A Triangle.
 * Code: 0010
 * Site: http://judge.u-aizu.ac.jp
 * Status: Wrong Answer
 * Type: Geometria
 */



#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main(int argc, char **argv)
{
	double A_x,A_y,B_x,B_y,C_x,C_y,D,U_x, U_y, r;
	double A,B,C;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>A_x>>A_y>>B_x>>B_y>>C_x>>C_y;
		U_x=0.0;
		U_y=0.0;
		D=0.0;
		r=0.0;
		A=0.0;
		B=0.0;
		C=0.0;
		
		
		A=sqrt(pow(B_x-A_x,2)+pow(B_y-A_y,2));
		B=sqrt(pow(C_x-B_x,2)+pow(C_y-B_y,2));
		C=sqrt(pow(C_x-A_x,2)+pow(C_y-A_y,2));
		r=(A*B*C)/sqrt((A+B+C)*(B+C-A)*(C+A-B)*(A+B-C));
		
		D = 2*( A_x*(B_y - C_y) + B_x*(C_y - A_y) + C_x*(A_y - B_y));
        U_x = ((A_x*A_x + A_y*A_y)*(B_y - C_y) + (B_x*B_x + B_y*B_y)*(C_y - A_y) + (C_x*C_x + C_y*C_x)*(A_y - B_y)) / D;
        U_y = ((A_x*A_x + A_y*A_y)*(C_x - B_x) + (B_x*B_x + B_y*B_y)*(A_x - C_x) + (C_x*C_x + C_y*C_y)*(B_x - A_x)) / D;
        U_x= (U_x*1000)/1000;
        U_y= (U_y*1000)/1000;
        r= (r*1000)/1000;
        printf("%.3lf %.3lf %.3lf\n", U_x, U_y, r);        
	}
	return 0;
}

