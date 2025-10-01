/*  Problem: Area
 *  Code: 1012
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	double pi=3.14159;
	double a,b,c;
	cin>>a>>b>>c;
	cout.precision(3);
    cout.setf(ios::fixed);
	cout<<"TRIANGULO: "<< (a*c)/2.0<<endl;
	cout<<"CIRCULO: "<<(pi*c*c)<<endl;
	cout<<"TRAPEZIO: "<<((a+b)*c)/2.0<<endl;
	cout<<"QUADRADO: "<< b*b<<endl;
	cout<<"RETANGULO: "<< a*b<<endl;
	return 0;
}

