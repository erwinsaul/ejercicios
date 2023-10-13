/* Problem: Higher Math
 * Code: 16
 * Site: acm.hdu.edu.cn
 * Status: Accepted
 * Type: Ad-Hoc - Math
 */


#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	unsigned long a,b,c,v[3];
	int t;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		cin>>v[0]>>v[1]>>v[2];
		sort(v,v+3);
		a=v[0]*v[0];
		b=v[1]*v[1];
		c=v[2]*v[2];
		cout<<"Scenario #"<<k<<":"<<endl;
		if((a+b)==c)
		    cout<<"yes"<<endl;
		else
		    cout<<"no"<<endl;
	    cout<<endl;
	}
	return 0;
}

