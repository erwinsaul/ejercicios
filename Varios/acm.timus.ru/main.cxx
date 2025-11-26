/*  Problem:  Psych Up's Eigenvalues
 *  Code: 1880
 *  Site: acm.timus.ru
 *  Type: Ad-Hoc 
 *  Status : Accepted
 */     


#include <iostream>
#include <map>

using namespace std;
int main(int argc, char **argv)
{
	map<int,int> v;
	
    map<int,int>::iterator it;

	int n, a, r=0;
	
	while(r<3)
	{
		cin>>n;
		for(int k=0;k<n;k++)
		{
			cin>>a;
			v[a]++;
		}
		r++;
	}
	r=0;
	for ( it=v.begin() ; it != v.end(); it++ )
	{
		if((*it).second==3)
             r++;
	}
	cout<<r<<endl;
	return 0;
}

