/* Problem: Prime Number
 * Code: 0009
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-Hoc - Math 
 */


#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n)
{
	if(n<0) return is_prime(-n);
	if(n<5 || n%2==0 || n%3==0) return (n==2 || n==3);
	int maxP=sqrt(n)+2;
	for(int p=5;p<maxP;p+=6)
	{
		 if(n%p==0 || n %(p+2)==0) return false;
	}
	return true;
}

int main(int argc, char **argv)
{
	int n;
	int p[80000]={0};
	int j=0;
	int k=2;
	while(k<1000000)
	{
		
		if(is_prime(k))
		{
			p[j]=k;
			j++;	
		
		}
		k++;
		
	}
	
	while(cin>>n)
	{
		j=0;
		k=0;
		while(p[k]<=n&& p[k]!=0 )
		{
			j++;
			k++;
		}
		cout<<j<<endl;
	}
	return 0;
}

