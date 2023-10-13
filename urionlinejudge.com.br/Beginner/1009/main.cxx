/*  Problem: Salary with Bonus
 *  Code: 1009
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    string nombre;
    double s, v;
    cin>>nombre>>s>>v;   
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<"TOTAL = R$ "<<(s+(v*0.15))<<endl;    
	return 0;
}

