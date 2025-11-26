/*  Problem: The hardest problem
 *  Code: 1157
 *  Site: www.soj.me
 *  Status: Accepted
 *  Type: Ad-Hoc
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n,may,d;
	while(cin>>n && n)
	{
		may=-999999;
		while(n--)
		{
			cin>>d;
			if(d>may) 
			 may=d;
		}
		cout<<may<<endl;
	}
	return 0;
}

