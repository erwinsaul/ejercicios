/* Problem: Hit and Blow
 * Code: 0025
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-Hoc
 */

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a[4],b[4];
	int hit,blow;
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3])
	{
	    hit=0;
	    blow=0;
	    for(int k=0;k<4;k++)
	    {
			if(a[k]==b[k])
			  hit++;
			else
			{
				for(int j=0;j<4;j++)
				{
					if(a[k]==b[j])
					{
					  blow++;
					  break;
				    }
				}
			}
		}
		cout<<hit<<" "<<blow<<endl;
	}
	return 0;
}

