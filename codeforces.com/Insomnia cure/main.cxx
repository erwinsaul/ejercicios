/* Problem: Insomnia cure
 * Code: 148-A
 * Site: codeforces.com
 * Status: Accepted
 * */        


#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char **argv)
{
	int k,l,n,m,d;
	cin>>k>>l>>n>>m>>d;
	int v[d+1];
	memset(v,0,sizeof(v));
	for(int i=1;i<=d;i++)
	{
		if(i%k==0||i%l==0||i%n==0||i%m==0)
		    v[i]=1;
	}
	int s=0;
	for(int i=1;i<=d;i++)
	{ 
		s+=v[i];
	}
	cout<<s<<endl;
	return 0;
}

