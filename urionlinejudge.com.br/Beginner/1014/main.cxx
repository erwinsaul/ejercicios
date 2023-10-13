/*  Problem: Consumption
 *  Code: 1014
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int x, y;
    cin>>x>>y;
    cout.precision(3);
    cout.setf(ios::fixed);
    cout<<double(x)/double(y)<<" km/l"<<endl;	
	return 0;
}

