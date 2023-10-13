/*   Problem: An Unidentified Object Cup
 *   Code: 2443
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */


#include <iostream>
#include <string.h>
#include <cmath>
#include <climits>
using namespace std;

bool is_prime(int n)
{
   if (n < 0) return is_prime(-n);
   if (n < 5 || n % 2 == 0 || n % 3 == 0) return (n == 2 || n == 3);
   int maxP = sqrt(n) + 2;
   for (int p = 5; p < maxP; p += 6)
      if (n % p == 0 || n % (p+2) == 0) 
        return false;
   return true;
}

int main(int argc, char **argv)
{
	int v[101];
	int n, k, r, d,p;
	memset(v,0,sizeof(v));
	v[1]=1;
	v[0]=1;
	for(int k=2;k<101;k++)
	{
		if(is_prime(k))
		   v[k]=1;
	}
	cin>>n>>k;
	int mayor=INT_MIN;
    bool flag=true;
	for(int j=0;j<n;j++)
	{
		r=0;
		for(int i=0;i<k;i++)
		{
			cin>>d;
			if(v[(int)fabs(d)])
			  r++;
		}
		if(r==mayor)
		   flag=false;
		if(r>mayor)
		{
           p=j+1;
		   mayor=r;
	    }	   
	}
	if(flag)
	  cout<<"Object "<<p<<" wins with "<<mayor<<" rare characteristics"<<endl;
	else
	  cout<<"No winner"<<endl;
	return 0;
}

