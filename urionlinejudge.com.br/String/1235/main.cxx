/*  Problem: Inside Out
 *  Code: 1235
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: String
 */

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <set>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
	string s,a,b;
	int n;
	getline(cin,s);
	istringstream ss(s);
	ss>>n;
	int m;
	while(getline(cin,s))
	{
		m=((int)s.length())/2;
		a=s.substr(0,m);
		b=s.substr(m,s.length());
		a=string(a.rbegin(),a.rend());		
		b=string(b.rbegin(),b.rend());		
		cout<<a<<b<<endl;
	}
	return 0;
}

