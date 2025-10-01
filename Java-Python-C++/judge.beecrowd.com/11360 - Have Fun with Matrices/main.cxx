/*  Problem: 11360 - Have Fun with Matrices
 *  Site: uva.onlinejudge.org
 *  Status:Pending
 *  Type: Ad-hoc - Matriz
 */

#include <bits/stdc++.h>

using namespace std;

int m[10][10];
int aux[10][10];
int n;

void inc()
{
	for(int k=0;k<n;k++)
	   for(int j=0;j<n;j++)
	       m[k][j]=(m[k][j]+1)%10;
}

void dec()
{
	for(int k=0;k<n;k++)
	   for(int j=0;j<n;j++)
	       m[k][j]=(m[k][j]-1)<0? 9 : m[k][j]-1;
}

void transpose()
{
	
	for(int k=0;k<n;k++)
	{
		for(int j=0;j<n;j++)
		{
			aux[k][j]=m[j][k];		
		}
	}
	
	for(int k=0;k<n;k++)
	{
		for(int j=0;j<n;j++)
		{
			m[k][j]=aux[k][j];
		}
	}
}

void row(int o, int d)
{	
	for(int k=0;k<n;k++)
	{
		swap(m[o][k],m[d][k]);
	}
}

void col(int o, int d)
{
	for(int k=0;k<n;k++)
	{
		swap(m[k][o],m[k][d]);
	}
}

void mostrar()
{
	 for(int k=0;k<n;k++)
	 {
		 for(int j=0;j<n;j++)
		 {
			 cout<<m[k][j];
		 }
		 cout<<endl;
	 } 
}


int main(int argc, char **argv)
{
	int t, q,o,d;
	string s;
	char l;
	cin>>t;	
	for(int cont=1;cont<=t;cont++)
	{
		cin>>n;
		for(int k=0;k<n;k++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>l;			
			    m[k][j]=l-48;			  
		   }
		}	
	   cin>>q;
	  for(int k=0;k<q;k++)
	 {
	  cin>>s;
	  if(s.compare("transpose")==0)
	     transpose();	
	  else if(s.compare("inc")==0)
	     inc();
	  else if(s.compare("dec")==0)
	     dec(); 
	  else if(s.compare("row")==0)
	  {
		 cin>>o>>d;
	     row((o-1),(d-1));
	  }
	  else
	  {
		 cin>>o>>d;
	     col((o-1),(d-1));
	  }	
	  
	 }	
	 cout<<"Case #"<<cont<<endl;
	 mostrar();
	 cout<<endl;
   }
	
	return 0;
}

