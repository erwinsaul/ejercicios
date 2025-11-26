/*   Problem: 16417. Cola de Primos
 *   Site: bo.spoj.com
 *   Status: Pending
 *   type: Math
 */

#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n)
{
	if (n < 5 || n%2 == 0 || n % 3 ==0)
	   return (n==2 || n==3);
	int maxP = sqrt(n)+2;
	for(int p=5;p<maxP;p+=6)
	   if(n%p==0 || n% (p+2)==0)
	      return false;
	return true;
}

int main(int argc, char **argv)
{
	int n,q,p,d;
	cin>>n;
	vector<int> v;
	for(int k=0;k<n;k++)
	{
	   cin>>d;
	   v.push_back(d);
    }
	cin>>q;
	p=-1;
	for(int k=0;k<n;k++)
	{
		if(v[k]==q)
		{
			p=k;
			break;
		}
	}
	if(p!=-1)
	{
		if(p>0 && p<(n-1))
	    {
			if(is_prime(v[p-1]) && is_prime(v[p+1]))
			   cout<<"Yes";
			else
			   cout<<"No";
		}
		else
		  cout<<"No";
	}
	else
	   cout<<"No";
	return 0;
}

