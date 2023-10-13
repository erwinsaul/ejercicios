/* Problem:Sale Result
 * Code: 0100
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-Hoc
 */    


#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;
int main(int argc, char **argv)
{
	int n,i;
	ll p,q;
	map<int,ll> m;
    vector<int>::iterator it;
    map<int,ll>::iterator f;
	vector<int> v;
	while(true)
	{
		cin>>n;
		if(n==0)
		  break;
		for(int k=0;k<n;k++)
		{
			cin>>i>>p>>q;
			if(find(v.begin(),v.end(),i)==v.end())
			   v.push_back(i);
			
			if(m.find(i)!=m.end() )
			{
				m[i]=m[i]+(p*q);
				
			}
			else
			{
				m[i]=p*q;
			}
		}
		bool sw=false;
		for(it=v.begin();it!=v.end();++it)
		{
			if(m[*it]>=1000000)
			{
   			  f=m.find(*it);
			  cout<<(*f).first<<endl;
			  sw=true;
			}			
		}
		if(!sw)
		  cout<<"NA"<<endl;
		m.clear();
		v.clear();
		
	}
	return 0;
}

