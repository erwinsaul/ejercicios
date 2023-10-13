#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
	multimap< string, pair<char, string> > m;
	multimap< string, pair<char, string> >::iterator it;
	vector<string> p;
	vector<string> g;
	vector<string> me;
	vector<string>::iterator vit;
	pair<char,string> aux;
	pair< multimap< string, pair<char, string> >::iterator, multimap< string, pair<char, string> >::iterator > ret; 
	int n;
	string s;
	string nombre;
	istringstream ss;
	char c;
	bool f=false;
	while(1)
	{		
		getline(cin,s);
		ss.str(s);
		ss>>n;
		if(n==0)
			break;
		if(f)
			cout<<endl;
		f = true;
		ss.clear();	
		for(int k=0;k<n;k++)
		{
			getline(cin, nombre);			
			getline(cin, s);
			ss.str(s);
			ss>>s>>c;
			aux = make_pair(c,nombre);
			m.insert(pair< string, pair< char, string >  >(s, aux));			
		}		
		
		ret = m.equal_range("branco");	
		for(it=ret.first;it!=ret.second;it++)
		{
			if((*it).second.first=='P')
				p.push_back((*it).second.second);
			if((*it).second.first=='M')
				me.push_back((*it).second.second);
			if((*it).second.first=='G')
				g.push_back((*it).second.second);
		}
		sort(p.begin(), p.end());
		sort(me.begin(), me.end());
		sort(g.begin(), g.end());
		
		for(vit=p.begin();vit!=p.end();vit++)
		{
			cout<<"branco P "<<*vit<<endl;
		}
		for(vit=me.begin();vit!=me.end();vit++)
		{
			cout<<"branco M "<<*vit<<endl;
		}
		for(vit=g.begin();vit!=g.end();vit++)
		{
			cout<<"branco G "<<*vit<<endl;
		}
		
		p.clear();
		me.clear();
		g.clear();
		ret = m.equal_range("vermelho");	
		for(it=ret.first;it!=ret.second;it++)
		{
			if((*it).second.first=='P')
				p.push_back((*it).second.second);
			if((*it).second.first=='M')
				me.push_back((*it).second.second);
			if((*it).second.first=='G')
				g.push_back((*it).second.second);
		}
		sort(p.begin(), p.end());
		sort(me.begin(), me.end());
		sort(g.begin(), g.end());
		
		for(vit=p.begin();vit!=p.end();vit++)
		{
			cout<<"vermelho P "<<*vit<<endl;
		}
		for(vit=me.begin();vit!=me.end();vit++)
		{
			cout<<"vermelho M "<<*vit<<endl;
		}
		for(vit=g.begin();vit!=g.end();vit++)
		{
			cout<<"vermelho G "<<*vit<<endl;
		}
		p.clear();
		me.clear();
		g.clear();
		m.clear();		
	}
	return 0;
}

