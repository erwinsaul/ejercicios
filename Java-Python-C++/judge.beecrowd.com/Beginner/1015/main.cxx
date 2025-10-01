/*  Problem: Distance Between two points
 *  Code: 1015
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */



#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	double x=(x2-x1)*(x2-x1);
	double y=(y2-y1)*(y2-y1);
	double r=sqrt(x+y);
	cout.precision(4);
    cout.setf(ios::fixed);
    cout<<r<<endl;
	return 0;
}

