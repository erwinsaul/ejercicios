/* Problem: Tram
 * Code: 116 - A
 * Site: codeforces.com
 * Status: Accepted
 * */  

#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
	int t,a,b,mayor=0;
	cin>>t;
	int c=0;
	while(t--)
	{
		cin>>a>>b;
		c=c-a+b;
		if(c>mayor)
		  mayor=c;
	}
	cout<<mayor;
	
	return 0;
}

