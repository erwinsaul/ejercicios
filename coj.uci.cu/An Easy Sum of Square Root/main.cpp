//    Problem: An Easy Sum of Square Root
//    Site: coj.uci.cu  
//    Code: 1497


#include <iostream>
#include <cmath>

using namespace std;

/*long double term(int n)
{
	long double t;
	t=1.0+(1.0/((n-1)*(n-1)))+(1.0/(n*n));
	return t;
}*/


int main(int argc, char** argv)
{
	int n;
	while(cin>>n)
	{
		long double sol=0;
	    long double k;
	    for(k=2;k<=n;k++)
	     {
		  sol=sol+sqrt(1+(1/((k-1)*(k-1)))+(1/(k*k)));
	     }
		
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(16);
        cout<<sol<<endl;
	}
	return 0;
	
	
}
