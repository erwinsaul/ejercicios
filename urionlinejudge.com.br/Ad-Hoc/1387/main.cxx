/*  Problem: Og
 *  Code: 1387
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Ad Hoc
 */


#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
	int a, b;
	while(1)
	{
		cin>>a>>b;
		if(a==0&&b==0)
		  break;
		cout<<(a+b)<<endl;
	}
	return 0;
}

