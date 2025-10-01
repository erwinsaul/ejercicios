/*  Problem: Going to the Market
 *  Code: 1281
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
#include <map>
using namespace std;

int main(int argc, char **argv)
{
	int t,n;
	float c,total;
	string s;
	map<string,float> m;
	cin>>t;
	while(t--)
	{
		total=0;
		cin>>n;
		for(int k=0;k<n;k++)
		{
			cin>>s>>c;
			m[s]=c;
		}
		cin>>n;
		for(int k=0;k<n;k++)
		{
			cin>>s>>c;
			total=total+(m[s]*c);
		}
		printf("R$ %.2f\n",total);
		m.clear();
	}
	return 0;
}

