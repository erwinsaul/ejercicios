/*  Problem: He is Offside!
 *  Code: 1410
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad-Hoc 
 */

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char **argv)
{
	vector<int> n;
	vector<int> m;
	int a,b,x;
	while(cin>>a>>b && a && b)
	{
		for(int k=0;k<a;k++)
		{
			cin>>x;
			n.push_back(x);
		}  
		for(int k=0;k<b;k++)
		{
			cin>>x;
			m.push_back(x);
		} 
		sort(n.begin(),n.end());
		sort(m.begin(),m.end());
	    if(n[0]<m[1])
	      puts("Y");
	    else
	      puts("N");
	    n.clear();
	    m.clear();
	}
	return 0;
}

