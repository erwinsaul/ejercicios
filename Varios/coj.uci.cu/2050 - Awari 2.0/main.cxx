/*  Problem: Awari 2.0
 *  Code: 2050
 *  Site: coj.uci.cu
 *  Status: Accepted
 *  Type: Sorting
 */



#include <iostream>

using namespace std;

int pos(int v[], int t)
{
	for(int k=1;k<=t;k++)
	{
		if(k==v[k])
		   return k;
	}
	return 0;
}

bool ganar(int v[], int t)
{
	int r=0;
	for(int k=1;k<=t;k++)
	    r=r+v[k];
	return (r==0);
}

int main(int argc, char **argv)
{
	int n;
	int v[501];
	int p;
	while(cin>>n && n!=-1)
	{
		for(int k=1;k<=n;k++)
		{
			cin>>v[k];
		}
		
		while((p=pos(v,n))!=0)
		{
			for(int k=1;k<=p;k++)
			{
				v[k]++;
			}
			v[p]=0;
		}
		if(ganar(v,n))
		   cout<<"S";
		else
	       cout<<"N";
	    cout<<endl;
		
		
	}
	return 0;
}

