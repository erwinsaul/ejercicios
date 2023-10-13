/*  Problem: Sphere
 *  Code: 1011
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char **argv)
{
	double pi=3.14159;
	double r;
	cin>>r;
	cout.precision(3);
    cout.setf(ios::fixed);
	cout<<"VOLUME = "<<((4.0/3.0)*pi*r*r*r)<<endl;
	return 0;
}

