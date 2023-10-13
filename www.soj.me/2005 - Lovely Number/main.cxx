/*  Problem: Lovely Number
 *  Code: 2005
 *  Site: www.soj.me
 *  Status: Accepted
 *  Type: Ad-Hoc
 */


#include <iostream>
#include <map>
using namespace std;
int main(int argc, char **argv)
{
	int n,d;
	map<int,int> m;
	map<int,int>::iterator it;
    long odd;
	while(cin>>n)
	{
		odd=0;	
		for(int k=0;k<n;k++)
		{
			cin>>d;
			m[d]++;			
		}
		
		for(it=m.begin();it!=m.end();it++)
		{
			if(((*it).second % 2 )==1)
			   odd=(*it).first;
		}
		cout<<odd<<endl;
		m.clear();
	}
	return 0;
}

