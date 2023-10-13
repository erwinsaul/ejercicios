/*  Problem: Multiplication Table
 *  Code: 1078
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
	for(int k=1;k<=10;k++)
	{
		cout<<k<<" x "<<n<<" = "<<k*n<<endl;
	}
	return 0;
}

