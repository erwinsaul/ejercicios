/* Problem: A+B for Input-Output Practice (IV)
 * Code: 3004
 * Site: acm.hdu.edu.cn
 * Status: Accepted
 * Type: Nivel 0
 */



#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
	int a,b,s;
	while(1)
	{
		cin>>a;
		if(a==0)  
		  break;
	   s=0;
	   for(int k=0;k<a;k++)
	   {
		   cin>>b;
		   s=s+b;
	   }
	   cout<<s<<endl;
	}
	return 0;
}

