/*  Problem: Interval 2
 *  Code: 1072
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int n,t,i,o;
	i=0;
	o=0;
	cin>>t;
	while(t--)
	{
		cin>>t;
		if(t>=10&&t<=20)
		  i++;
		else
		  o++;
	}
	cout<<i<<" in"<<endl;
	cout<<o<<" out"<<endl;
	return 0;
}

