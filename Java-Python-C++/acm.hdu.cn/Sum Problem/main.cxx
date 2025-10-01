/* Problem: Sum problem		
 * Code: 1001		
 * Site: acm.hdu.edu.cn
 * Status: Accepted
 * Type: Ad-Hoc
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	while(cin>>n)
	{
		int s=0;
		for(int k=1;k<=n;k++)
		  s=s+k;
		cout<<s<<endl<<endl;
	}
	return 0;
}

