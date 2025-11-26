/*  Problem: Positive Numbers
 *  Code: 1060
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int p=0;
	double n;
	for(int k=0;k<6;k++)
	{
		cin>>n;
		if(n>0.0)
		  p++;
	}
	cout<<p<<" valores positivos"<<endl;
	return 0;
}

