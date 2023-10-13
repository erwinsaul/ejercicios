/*  Problem: About Dogs and a Postman
 *  Code: 1236 
 *  Site: coj.uci.cu
 *  Status: Accepted
 *  Type: simulacion
 */



#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

void mensaje(int n)
{
	if(n==0)
	   cout<<"none"<<endl;
	if(n==1)
	   cout<<"one"<<endl;
	if(n==2)
	   cout<<"both"<<endl;
}
int main(int argc, char **argv)
{
	int l1,p1,l2,p2;
	int a,b,c;
	int v[1000];
	int limit1,limit2;
	cin>>l1>>p1>>l2>>p2;
	cin>>a>>b>>c;
	int m=max(a,max(b,c));
	limit1=l1;
	limit2=l2;
	int sw1=1;
	int sw2=1;
	int sw;
	for(int k=1;k<=m;k++)
	{
		sw=sw1+sw2;
		v[k]=sw;			
		if(k==limit1)
		{
			if(sw1)
			{
			  sw1=0;			
			  limit1=limit1+p1;
			}
			else
			{
				sw1=1;
				limit1=limit1+l1;
			} 
		}
		
		if(k==limit2)
		{
			if(sw2)
			{
			  sw2=0;			
			  limit2=limit2+p2;
			}
			else
			{
				sw2=1;
				limit2=limit2+l2;
			} 
		}
	}
	
	mensaje(v[a]);
	mensaje(v[b]);
	mensaje(v[c]);
	
	return 0;
}

