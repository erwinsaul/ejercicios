/*  Problem: 343 - What Base Is This?
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Math - Base
 */
#include <bits/stdc++.h>

using namespace std;

long int toten(string s, int b) 
{
	int tam=s.length();
	long int num=0;
	for(int k=0;k<tam;k++)
	{
		
	num=num+((isdigit(s.at(k))) ? (s.at(k)-48): (s.at(k)-'A'+10))*((long int)pow(b,tam-k-1));
	}
	return num;	
}

int base(string s)
{
	int m=0;
	int aux;
	for(int k=0;k<(int)s.length();k++)
	{
		aux=isdigit(s.at(k))?(s.at(k)-48):(s.at(k)-'A'+10);
		m=max(m,aux);
	}	
	return (m+1);
}

int main(int argc, char **argv)
{
	
	string n,m;
	int b1,b2;
	bool flag;
	while(cin>>n>>m)
	{
	   	if(n=="0" && m=="0")
	   	  cout<<"0 (base 2) = 0 (base 2)"<<endl;
	   	else
	   	{
			b1=base(n);		
			flag=false;
			while(b1<=36 && !flag)
			{								
				b2=base(m);
				while(b2<=36 && !flag)
				{					
					if(toten(n,b1)==toten(m,b2))
					{
						flag=true;
						break;
					}									
					b2++;				  
				}
				if(flag)
				  break;							
				b1++;				
			}
			if(flag)
			  cout<<n<<" (base "<<b1<<") = "<<m<<" (base "<<b2<<")\n";
			else
			  cout<<n<<" is not equal to "<<m<<" in any base 2..36\n";
		}
	   	
	}	
	return 0;
}

