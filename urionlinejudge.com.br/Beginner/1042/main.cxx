/*  Problem: Simple Sort
 *  Code: 1042
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
	int v[3],a[3];
	cin>>v[0]>>v[1]>>v[2];
	a[0]=v[0];
	a[1]=v[1];
	a[2]=v[2];
	sort(a,a+3);
	cout<<a[0]<<endl;
	cout<<a[1]<<endl;
	cout<<a[2]<<endl;
	cout<<endl;
	cout<<v[0]<<endl;
	cout<<v[1]<<endl;
	cout<<v[2]<<endl;
	return 0;
}

