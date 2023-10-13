/*  Problem: Little Elephant and Function
 *  Code: 221-A
 *  Site: codeforces.com
 *  Type: Time / Ad-Hoc / Math
 *  Status : Pending
 */          


#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;
int v[1001];
int aux[1001];

bool ascendente(int n)
{
	for(int k=1;k<n;k++)
	{
		if(aux[k]>aux[k+1])
		   return false;
	}
	return true;
	
}

int f(int x)
{
	if(x==1)
	   return 0;
	else
	{
		swap(aux[x-1],aux[x]);
		return f(x-1);
		
	}
}

int main(int argc, char **argv)
{
	int n, r;
	cin>>n;
	for(int k=1;k<=n;k++)
	{
		v[k]=k;
	}
	
	do
    {
	  next_permutation (v+1,v+n+1);
	  
	  for(int k=1;k<=n;k++)
	  {
		  aux[k]=v[k];
	  }
	  
	    
      r=f(n);
      	  
	           
    } while (!ascendente(n) );
    
	for(int k=1;k<=n;k++)
	{
		cout<<v[k]<<" ";
	}
	
	return 0;
}

