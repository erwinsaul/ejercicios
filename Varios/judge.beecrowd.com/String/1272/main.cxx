/*  Problem: Hidden Message 
 *  Code: 1272
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: String - 2
 */

#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
#include <sstream>

using namespace std;
int main(int argc, char **argv)
{
	string s;
	getline(cin,s);
	stringstream ss(s);
	int n; 
	ss>>n;
	while(n--)
	{
		getline(cin,s);
		stringstream ss(s);
		while(ss>>s)
		  putchar(s.at(0));
		putchar(10);
	}
	return 0;
}

