/* Problem: Prime Frequency
 * Code: 10789
 * Site: uva.onlinejudge.org
 * Type: Ad-hoc / Math /String
 * Status: Accepted
*/


#include <iostream>
#include <string>
#include <map>
#include <cmath>
using namespace std;
bool is_prime(int n)
{
	if(n>1)
	{
	 for(int i=2;i<=(int)sqrt(n);i++)
	  if(n%i==0)
	    return false;
	 return true;   
	}
	else    
	 return false;
}
int main(int argc, char **argv)
{
	int t;
	cin>>t;
	string s;
	int a,b;
	for(int k=1;k<=t;k++)
	{
		map<char,int> m;
		map<char,int>::iterator it;
		a=0;
		cin>>s;
		for(int i=0;i<(int)s.length();i++)
		{
			m[s.at(i)]++;
		}
		cout<<"Case "<<k<<": ";
		for ( it=m.begin() ; it != m.end(); it++ )
		{
		  b=(*it).second;
		  if(is_prime(b))
		  {
             cout << (*it).first;
             a++;
	      }
        } 
        if(a==0)
          cout<<"empty";
        cout<<endl; 
	}
	return 0;
}

