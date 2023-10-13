/* Problem: English Sentence
 * Code: 0029
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Cadenas
 */


#include <iostream>
#include <map>
#include <string>

using namespace std;
int main(int argc, char **argv)
{
	map<string,int> m;
	map<string,int>::iterator it;
	int max=0, l=0;
	string s, aux;
	while(cin>>s)
	{
		m[s]++;
		if(m[s]>max)
		   max=m[s];
		if((int)s.length()>l)
		{
			aux=s;
			l=aux.length();
		}
	}
	for(it=m.begin();it!=m.end();++it)
	{
		if(max==(*it).second)
		{
			cout<<(*it).first;
		}
	}
	cout<<" "<<aux<<endl;
	
	return 0;
}

