/* problem: Incredible Penguins
 * code: 2752
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	map<int, string> m;
	map<int, string>::iterator it;
	vector<string> v;
	vector<string>::iterator vit;	
	string nombre;
	int id, t;
	cin>>t;
	v.clear();
	m.clear();
	while(t--)
	{		
		cin>>nombre>>id;
		v.push_back(nombre);
		it = m.find(fabs(id));
		if(it!=m.end())
		{
			m.erase(it);
		}
		else
		{
			m[fabs(id)]=nombre;
		}		
	}	
	cout<<"FOREVER ALONE ones:"<<endl;
		for(vit=v.begin();vit!=v.end();vit++)
		{
			for(it=m.begin();it!=m.end();it++)
			{
				if((*vit)==(*it).second)
				{
					cout<<(*vit)<<endl;
					break;
				}
			}
		}
	
	return 0;
}

