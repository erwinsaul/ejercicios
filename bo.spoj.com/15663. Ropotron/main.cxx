/*   Problem: 15663. Ropotron
 *   Code: 15663
 *   Site: bo.spoj.com
 *   Status: pending
 *   type: Math
 */

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

string bin(int n)
{
	string s="";
	while(n>0)
	{
		s.push_back((char)(n%2+48));
		n=n/2;
	}
	return s;
}

void conjuntos()
{
	int n,t,d;
	int v[10000];
	int m[10000];	
	cin>>n;
	for(int k=0;k<n;k++)
	{
		cin>>v[k];
	}
	cin>>d;
	for(int i=0;i<d;i++)
	{
		cin>>t;
	    string s="";
	    int j=0;
	    int sum=0;
	    int cont=0;
	    memset(m,0,sizeof(m));		
	    while((int)s.length()<=t)
	    {
	      sum=0;	 
	      for(int k=0;k<(int)s.length();k++)
			{
				if(s.at(k)=='1')
				{
					sum=sum+v[k];
				}
			}	 
		//cout<<s<<endl;
		//cout<<sum<<endl;	
		if(m[sum]==0)	
		{
			m[sum]=1;
			cont++;
		}
		j++;
		s=bin(j);
		}
		cout<<cont<<endl;
	}
}



int main(int argc, char **argv)
{
	int t;
	cin>>t;
	while(t--)
	{
		conjuntos();
	}
	return 0;
}

