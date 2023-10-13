/* Problem: A+B for Input-Output Practice (III)
 * Code: 3003
 * Site: acm.hdu.edu.cn
 * Status: Accepted
 * Type: Nivel 0
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a,b;
	while(1)
	{
		cin>>a>>b;
		if(a==0&&b==0)
		   break;
	    cout<<(a+b)<<endl;
	}
	return 0;
}

