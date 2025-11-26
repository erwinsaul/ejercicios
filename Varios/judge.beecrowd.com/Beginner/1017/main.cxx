/*  Problem: Fuel spent
 *  Code: 1017
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted 
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int v,t;
	double g,d;
	cin>>t>>v;
	d=(double)v*(double)t;	
	g=d/12.0;
    cout.precision(3);
    cout.setf(ios::fixed);
	cout<<g<<endl;
	return 0;
}

