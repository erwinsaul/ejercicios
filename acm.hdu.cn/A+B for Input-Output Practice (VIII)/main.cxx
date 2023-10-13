/* Problem: A+B for Input-Output Practice (VIII)
 * Code: 3007
 * Site: acm.hdu.edu.cn
 * Status: Accepted
 * Type: Nivel 0
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int t,s,a,b;
	cin>>t;

	while(t--)
	{
		cin>>a;
		s=0;
		for(int k=0;k<a;k++)
		{
			cin>>b;
			s=s+b;
		}
		cout<<s<<endl;
		if(t>=1)
		  cout<<endl;
	}
	return 0;
}

