/*  Problem: Game of The Greatest
 *  Code: 1397
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Ad-Hoc - 1
 */

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int t,a,b,x,y;
	while(1)
	{
		a=0;
		b=0;
		cin>>t;
		if(t==0)
		   break;
		for(int k=0;k<t;k++)
		{
			cin>>x>>y;
			if(x!=y)
			{
				if(x>y)
				  a++;
				else
				  b++;
			}
		}
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}

