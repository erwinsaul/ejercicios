/*  Problem: Array Hash
 *  Code: 1257
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: String
 */

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <set>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char **argv)
{
	int t,n,sum;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=0;
		for(int k=0;k<n;k++)
		{
			cin>>s;
			for(int i=0;i<(int)s.length();i++)
			{
				sum=sum+(s.at(i)-'A')+k+i;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}

