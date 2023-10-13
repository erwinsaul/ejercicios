/* Problem: Google is Feeling Lucky
 * Code: 12015
 * Site: uva.onlinejudge.org
 * Type: Ad-Hoc / Map / String
 * Status: Accepted
 */       
     


#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	int t,c, n, mayor;
	string cad;
	cin>>t;
	c=1;
	while(t--)
	{
		map<string,int> m;
		map<string,int>::iterator it;
		string s[10];
		mayor=0;
		
		for(int k=0;k<10;k++)
		{
			cin>>cad>>n;
			m[cad]=n;
			if(n>mayor)
			   mayor=n;
			s[k]=cad;
			   
		}
		
		cout<<"Case #"<<c<<":"<<endl;
		for (int k=0;k<10;k++ )
		       if(mayor==m[s[k]])
		          cout<<s[k]<<endl;
                 
		c++;
	}
	return 0;
}

