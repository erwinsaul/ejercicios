/*   Problem: 2374 - Adding Numbers II
 *   Code: 2422
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
	int a, b;
	string n,m;	
	istringstream ss;	
	cin>>n>>m;
	string aux=n;
	string aux1=m;
	
	replace(n.begin(),n.end(),'6','5');
	ss.str(n);
	ss>>a;
	ss.clear();
	
	replace(m.begin(),m.end(),'6','5');
	ss.str(m);
	ss>>b;
	ss.clear();
	cout<<a+b<<" ";
	n=aux;
	m=aux1;
	
	replace(n.begin(),n.end(),'5','6');
	ss.str(n);
	ss>>a;
	ss.clear();
	
	replace(m.begin(),m.end(),'5','6');
	ss.str(m);
	ss>>b;
	ss.clear();
	cout<<a+b<<endl;
	return 0;
}

