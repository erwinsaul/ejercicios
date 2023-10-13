/*   Problem:  15616. Canasta de Frutas
 *   Code: 15616
 *   Site: bo.spoj.com
 *   Status: Accepted
 *   type: Ad-hoc / String
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int main(int argc, char **argv)
{
    long n,d,mayor,t;
    vector<long> v;
    string s;
    while(cin>>s>>t)
    {
		cin>>n;
		mayor=-1;
		for(int k=0;k<n;k++)
		{
			cin>>d;
			v.push_back(d);
		}
		
		sort(v.begin(),v.end());
		for(int k=0;k<n;k++)
		{
			d=v[k]*(n-k);
			
			if(d>mayor)
			   mayor=d;
		}		
		
		/*for(int k=0;k<n;k++)
		{
			d=0;
			for(int j=0;j<n;j++)
			{
				if(v[j]>=v[k])
				   d=d+v[k];
			}
			mayor=max(mayor,d);
		}*/
		cout<<"Salida para el ejemplo "<<t<<endl;
		cout<<mayor<<endl;
		v.clear();
	}	
 	return 0;
}

