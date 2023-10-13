/*  Problem: Simple Calculate
 *  Code: 1010
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int c1,c2;
	int n1,n2;
    double p1,p2;	
    cin>>c1>>n1>>p1;
    cin>>c2>>n2>>p2;
	cout.precision(2);
    cout.setf(ios::fixed);
    cout<<"VALOR A PAGAR: R$ "<<(n1*p1)+(n2*p2)<<endl;	
	return 0;
}

