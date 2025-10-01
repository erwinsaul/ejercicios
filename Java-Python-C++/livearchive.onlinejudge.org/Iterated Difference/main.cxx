/* Problem: Iterated Difference
 * Code: 5733
 * Site: http://livearchive.onlinejudge.org
 * Status: Pending
 * */    


#include <iostream>
#include <cmath>
using namespace std;
bool son_iguales(int v[], int n)
{
	
	int a=v[0];
	for(int k=1;k<n;k++)
	{
		if(v[k]!=a)
		  return false;
	}
	return true;
	
}
int main(int argc, char **argv)
{
	int n, j, c=0;
	while(1)
	{
		cin>>n;
		c++;
		if(n<=0)
		   break;
		int a[n];   
		j=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		while(j<1002&&!son_iguales(a,n))
		{
			int aux=fabs(a[n-1]-a[0]);
			for(int k=0;k<(n-1);k++)
			{
				a[k]=fabs(a[k]-a[k+1]);
			}
			a[n-1]=aux;
			j++;
			
		}
		if(j<=1000)
		   cout<<"Case "<<c<<": "<<j<<" iterations"<<endl;
		else
		  cout<<"Case "<<c<<": not attained"<<endl;
		
	}
	return 0;
}

