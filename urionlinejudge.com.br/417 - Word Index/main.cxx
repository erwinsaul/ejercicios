/* Problem: Word Index
 * Code: 417 
 * Site: uva.onlinejudge.org
 * Type: Ordenacion 
 * Status: Accepted
*/

#include <iostream>
#include <map>
using namespace std;
int main(int argc, char **argv)
{
	map<string,int> m;
	int ind=1;
	int k,i,j,l,h;
	string aux[]={"a","b","c","d","e","f","g","h",
	              "i","j","k","l","m","n","o","p",
	              "q","r","s","t","u","v","w","x",
	              "y","z"};
	for(k=0;k<26;k++)
	{
		m.insert(pair<string,int>(aux[k],ind));
		ind++;
	}
	for(k=0;k<26;k++)
	{
		for(i=k+1;i<26;i++)
		{
		  
		  m.insert(pair<string,int>(aux[k]+aux[i],ind));
		  ind++;
	    }
	}
	for(k=0;k<26;k++)
	{
		for(i=k+1;i<26;i++)
		{
		 for(j=i+1;j<26;j++)
		  {
		   m.insert(pair<string,int>(aux[k]+aux[i]+aux[j],ind));
		   ind++;
		   
	      }
	    }
	}
	for( k=0;k<26;k++)
	{
		for( i=k+1;i<26;i++)
		{
		 for( j=i+1;j<26;j++)
		  {
			for( l=j+1;l<26;l++)
			{   
		      m.insert(pair<string,int>(aux[k]+aux[i]+aux[j]+aux[l],ind));
		      ind++;
		    }
	      }
	    }
	}
	
	for(int k=0;k<26;k++)
	{
		for( i=k+1;i<26;i++)
		{
		 for( j=i+1;j<26;j++)
		  {
			for( l=j+1;l<26;l++)
			{  
			   for( h=l+1;h<26;h++)
			   {	
				 m.insert(pair<string,int>(aux[k]+aux[i]+aux[j]+aux[l]+aux[h],ind));
		         ind++;
		       }
		    }
	      }
	    }
	}
	string n;
	map<string,int>::iterator it;
	while(cin>>n)
	{
		it=m.find(n);
		if(it!=m.end())
		  cout<<m[n]<<endl;
		else
		  cout<<"0"<<endl;
	}
	
	return 0;
}

