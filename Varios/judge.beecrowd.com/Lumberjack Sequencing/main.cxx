/* Problem: Lumberjack Sequencing
 * Code: 11942
 * Site: uva.onlinejudge.org
 * Type: Ad-Hoc / Ordenacion
 * Status: Accepted
 */       


#include <iostream>

using namespace std;

bool ascendente(int v[], int n)
{
	for(int k=0;k<(n-1);k++)
	{
		if(v[k]>v[k+1])
		   return false;
	}
	return true;
	
}
bool descendente(int v[], int n)
{
	for(int k=0;k<(n-1);k++)
	{
		if(v[k]<v[k+1])
		   return false;
	}
	return true;
}

int main(int argc, char **argv)
{
	int t;
	int v[10];
	cin>>t;
	cout<<"Lumberjacks:"<<endl;
	while(t--)
	{
		for(int k=0;k<10;k++)
		  cin>>v[k];
		if(ascendente(v,10) || descendente(v,10))
		   cout<<"Ordered"<<endl;
	    else
	       cout<<"Unordered"<<endl;
	}
	return 0;
}

