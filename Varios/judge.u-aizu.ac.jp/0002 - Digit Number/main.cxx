/* Problem: Digit Number
 * Code: 0002
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-Hoc 
 */


#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
	int a,b,c,d;
	while(cin>>a>>b)
	{
		d=0;
		c=a+b;
		while(c>0)
		{
			c=c/10;
			d++;
		}
		cout<<d<<endl;
	}
	return 0;
}

