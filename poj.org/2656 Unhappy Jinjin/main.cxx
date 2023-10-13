/* problem: Unhappy Jinjin
 * code: 2656
 * site: poj.org
 * status:pendind
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	int n, a, b, r, mayor=-1;
	while(cin>>n && n)
	{
		mayor=-1;
		r=0;
		for(int k=1;k<=n;k++)
		{
			cin>>a>>b;
			if((a+b)>mayor)
			{
				r=k;
				mayor=a+b;
			}
		}
		if(mayor <= 8)
		   cout<<"0"<<endl;
		else
			cout<<r<<endl;		
	}
	return 0;
}

