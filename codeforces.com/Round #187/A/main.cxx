/*   Problem: Sereja and Bottles
 *   Code: A
 *   Site: codeforces - 187
 *   Status: Pending
 *   type: Ad-Hoc
 */


#include <iostream>
#include <map>
using namespace std;

int main(int argc, char **argv)
{
    int t,a,b;
    map<int,int> m;
    map<int,int>::iterator it;      
    cin>>t;
    int c=0;
    for(int k=0;k<t;k++)
    {
		cin>>a>>b;
		if(m.find(a)==m.end()) m[a]=0;
		if(m.find(b)==m.end()) m[b]=0;		
		if(a!=b)
		{
			m[b]++;		
		}
		else
		{
		   m[b]=0;
		   m[a]=0;
		}
	}    
		
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	} 
	
	for(it=m.begin();it!=m.end();it++)
	{
		if((*it).second==0)c++;
	} 
	
	cout<<c<<endl;
	return 0;
}

