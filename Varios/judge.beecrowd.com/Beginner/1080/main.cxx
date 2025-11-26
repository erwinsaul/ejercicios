/*  Problem: Highest and Position
 *  Code: 1080
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */



#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n,mayor,p;
	mayor=-9999999;
	for(int k=1;k<=100;k++)
	{
		cin>>n;
		if(n>mayor)
		{
			mayor=n;
			p=k;
		}
	}
	cout<<mayor<<endl;
	cout<<p<<endl;
	return 0;
}

