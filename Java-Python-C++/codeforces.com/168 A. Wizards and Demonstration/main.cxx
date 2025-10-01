/*   Problem: A. Wizards and Demonstration
 *   Site: codeforces.com
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n,x,y;	
	double p;
	long t;
	cin>>n>>x>>y;
	p=(double)y/100.0000;
	t=(long)ceil(n*p);	
	cout<<(((t-x)<0)?0:t-x)<<endl;
	return 0;
}

