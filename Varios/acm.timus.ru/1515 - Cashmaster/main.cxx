/* Problem: Cashmaster
 * Code: 1515
 * Site:ac.timus.ru
 * Type: Ad-hoc (II)
 * Status: Pending
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(int argc, char **argv)
{
	int n, i,j,r=0;
	scanf("%d",&n);
	bool v[1000001];
	memset(v,false,sizeof(v));
	for(int k=0;k<n;k++)
	{
		scanf("%d",&i);
		v[i]=true;
	}
	bool flag;
	for(int k=1;k<=i;k++)
	{
		flag=false;
		if(!v[k])
		{
		  flag=true;
		  cout<<"k"<<k<<endl;
		  for(j=1;j<k;j++)
		   {
			  if(v[j])
			  {
				cout<<"j"<<j<<endl;
			    if(v[k-j])
			    {
				  v[k]=true;	
			      flag=false;
			      break;
			    }
		      }
		  }
		}	
		if(flag)
		 {
			  r=k;
			  break;
		 }
	}
	printf("%d\n",r);
	return 0;
}

