/*  Problem: Even Between five Numbers
 *  Code: 1065
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int n, t=0;
	for(int k=0;k<5;k++ )
	{
		cin>>n;
		if(n%2==0)
		   t++;
	}
	cout<<t<<" valores pares"<<endl;
	return 0;
}

