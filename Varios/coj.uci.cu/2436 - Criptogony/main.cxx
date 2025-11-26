/*   Problem:  Criptogony
 *   Code: 2436
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: String
 */


#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
	int t,n,d,j;
	char v[26],c,r;	
	map<char,int> m;
	multimap<int,char> mm;
	map<char,int>::iterator it;
	multimap<int,char>::reverse_iterator rit;
	string s,aux;
	cin>>t;
	
	while(t--)
	{
		cin>>n>>d;
		for(int k=0;k<n;k++)
		{
			cin>>v[k];
		}
		cin>>s;
		aux=s;
		for(int k=0;k<d;k++)
		{
			m[s.at(k)]++;
		}		
		for(it=m.begin();it!=m.end();it++)
		{
			mm.insert(pair<int,char>((*it).second,(*it).first));
		}
		j=0;		
		for(rit=mm.rbegin();rit!=mm.rend();rit++)
		{
			c=(*rit).second;
			r=v[j];			
			for(int k=0;k<d;k++)
			{
				if(aux.at(k)==c)
				{
					s.at(k)=r;
				}
			}			
			j++;			
		}
		cout<<s<<endl;
		m.clear();
		mm.clear();		
	}
	return 0;
}

