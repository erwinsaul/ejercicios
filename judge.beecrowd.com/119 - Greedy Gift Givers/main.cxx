/*  Problem: 119 - Greedy Gift Givers
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Simulacion
 */


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	map<string,int> m;
	vector<string> v;
	string s,r;
	int t,c,n;
	bool flag=false;	
	while(cin>>t && t)
	{
		for(int k=0;k<t;k++)
		{
			cin>>s;
			v.push_back(s);
			m[s]=0;
		}
		
		for(int j=0;j<t;j++)
		{		
			cin>>s>>c>>n;
			if(n!=0)
			{			   
			  m[s]=m[s]-c+(c%n);			
			   c=c/n; 	   
		    }	   
			
			for(int k=0;k<n;k++)
			{
				cin>>r;
				m[r]=m[r]+c;				
			}
		}		
		
		if(flag)
		   cout<<endl;
		flag=true;
		
		for(int k=0;k<(int)v.size();k++)
		{
			cout<<v[k]<<" "<<m[v[k]]<<endl;
		}
		v.clear();
		m.clear();		
	}	
	return 0;
}

