/* Problem: A+B for Input-Output Practice (V)
 * Code: 3005
 * Site: acm.hdu.edu.cn
 * Status: Accepted
 * Type: Nivel 0
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int t,b,s,n;
    cin>>t;
    while(t--)
    {
		cin>>b;
		s=0;
		for(int k=0;k<b;k++)
		{
			cin>>n;
			s=s+n;
		}
		cout<<s<<endl;
	}	
	return 0;
}

