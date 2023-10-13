/* Proble: Numeric Parity
 * Code:1059
 * Site: coj.uci.cu
 * Status: Accepted
 * Type: Ad-Hoc
 */


#include <iostream>

using namespace std;
int inttobin(unsigned int a,int *bin)
{
	int one=0;
	unsigned int c=1;
	int i;
	for(i=31;i>=0;i--)
	{
		one=one+(a&c);
		bin[i]=(a&c)?1:0;
		c<<=1;
	}
	return one;
}

int solve(int bin[])
{
	int sum=0;
	for(int k=0;k<32;k++)
	{
		sum+=bin[k];
	}
	return (sum);
}

int main(int argc, char **argv)
{
	unsigned int n, temp;
	int k;
	while(1)
	{
		int bin[32];
		for(k=0;k<32;k++)
		{
			bin[k]=0;
		}
		cin>>n;
		if(n==0)
		  break;
	    temp=inttobin(n,bin);	
	 	cout<<"The parity of ";
	 	int cont=0;
	 	for(k=0;k<32;k++)
	 	{
			if(bin[k]==1)
			{
				cont=k;
				break;
			}
		}
		for(k=cont;k<32;k++)
	 	{
			cout<<bin[k];
		}
		cout<<" is "<<solve(bin)<<" (mod 2)."<<endl;
	 	
	 
	}
	
	return 0;
}
