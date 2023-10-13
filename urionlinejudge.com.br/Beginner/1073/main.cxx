/*  Problem: Even Square
 *  Code: 1073
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
	for(int k=2;k<=n;k+=2)
	{
		cout<<k<<"^2 = "<<(k*k)<<endl;
	}
	return 0;
}

