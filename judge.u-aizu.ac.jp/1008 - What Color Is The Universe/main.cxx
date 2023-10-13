/* Problem: What Color Is The Universe?
 * Code: 1008
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Estructura de datos
 */   


#include <iostream>
#include <map>
using namespace std;
int main(int argc, char **argv)
{
	int n,d,r;
	map<int,int> m;
	map<int,int>::iterator it;
	
	while(1)
	{
		cin>>n;
		r=-1;
		if(n==0)
		  break;
		for(int k=0;k<n;k++)
		{
			cin>>d;
			m[d]++;
		}
		for(it=m.begin();it!=m.end();++it)
		{
			if((*it).second>(n/2))
			   r=(*it).first;
		}
		if(r>-1)
		  cout<<r<<endl;
	    else
	      cout<<"NO COLOR"<<endl;
	   m.clear();
	}
	return 0;
}

