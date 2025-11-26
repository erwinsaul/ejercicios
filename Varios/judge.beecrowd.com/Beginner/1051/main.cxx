/*  Problem: Taxes
 *  Code: 1051
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>

using  namespace std;

int main(int argc, char **argv)
{
	double r;
	double impuesto=0.0;
	cin>>r;
	if(r>4500.00)
	{
		impuesto=(r-4500.00)*0.28;
		r=4500.00;
		impuesto=impuesto+(r-3000.00)*0.18;
		r=3000.00;
		impuesto=impuesto+(r-2000.00)*0.08;
	}
	if(r>3000.00 && r < 4500.00)
	{
		impuesto=(r-3000.00)*0.18;
		r=3000.00;
		impuesto=impuesto+(r-2000.00)*0.08;
	}
	if(r>2000.00 && r < 3000.00)
	{
		impuesto=(r-2000.00)*0.08;
	}
	
	cout.precision(2);
    cout.setf(ios::fixed);
    cout<<"R$ "<<impuesto<<endl;

	return 0;
}

