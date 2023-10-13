/*  Problem: Remaining 2
 *  Code: 1075
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cin>>n;
	for(int k=1;k<=10000;k++)
	{
		if(k%n==2)
		  cout<<k<<endl;
	}
	return 0;
}

