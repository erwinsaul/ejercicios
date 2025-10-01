/*  Problem: MJ, Nowhere to Hide
 *  Code: 1027
 *  Site: www.soj.me
 *  Status: Pending
 *  Type: Ad-Hoc
 */

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	map<string,string> m;
	map<string,string>::iterator it;
	string nombre,direccion;
	while(cin>>n && n)
	{
		for(int k=0;k<n;k++)
		{
		   cin>>nombre>>direccion;
		   m[nombre]=direccion;
		 }
		
		for(it=m.begin();it!=m.end();it++)
		{
			cout<<(*it).first<<" "<<(*it).second<<endl;
		}
		cout<<endl;
		m.clear();
	}
	return 0;
}

