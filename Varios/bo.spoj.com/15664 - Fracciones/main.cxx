/*   Problem:  15664 - Fracciones
 *   Code: 15664
 *   Site: bo.spoj.com
 *   Status: Accepted
 *   type: Ad-hoc
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a,b,c,d;
	while(cin>>a>>b>>c>>d && a && b && c && d)
	{
		if((a*d)==(b*c))
		   cout<<"="<<endl;
		else
		   cout<<"!="<<endl;
	}
	return 0;
}

