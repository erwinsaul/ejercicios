/*  Problem: Selection Test 1
 *  Code: 1036
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a!=0)
	{
		int d=b*b-4*a*c;
		if(d>=0)
		{
			double x1=(-b+sqrt(d))/(2*a);
			double x2=(-b-sqrt(d))/(2*a);
			cout.precision(5);
            cout.setf(ios::fixed);
            cout<<"R1 = "<<x1<<endl;
            cout<<"R2 = "<<x2<<endl;
		}
		else
		  cout<<"Impossivel calcular"<<endl;
		
	}
	else
	  cout<<"Impossivel calcular"<<endl;
	return 0;
}

