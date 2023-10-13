/* Problem: Book Index
 * Code: 0105
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Estructura de Datos - Multimap
 */


#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	multimap<string,int> m;
	map<string,int> w;
	vector<int> v;
    multimap<string,int>::iterator it;
    map<string,int>::iterator i;
    string word;
    int ind;
    while(cin>>word>>ind)
    {
		m.insert(pair<string,int>(word,ind));
		w[word]++;
	}	
	for(i=w.begin();i!=w.end();++i)
	{
		cout<<(*i).first<<endl;
		word=(*i).first;
		for (it=m.equal_range(word).first; it!=m.equal_range(word).second; ++it)
            v.push_back((*it).second);
            
        sort(v.begin(),v.end());    
        
        for(int  k=0;k<(int)v.size();k++)
        {
			cout<<v[k];
			if(k+1!=(int)v.size())
			  cout<<" ";
		}
		cout<<endl;
		v.clear();
	}	
	return 0;
}

