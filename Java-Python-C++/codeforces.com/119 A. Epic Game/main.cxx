/*   Problem: A. Epic Game
 *   Site: codeforces - 187
 *   Status: Pending
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;	

int gcd(int a, int b)
{
	return b? gcd(b,a%b):abs(a);
}

int main(int argc, char **argv)
{
	int a, b, n;
	cin>>a>>b>>n;
	int p1,p2;
	int win;
	while(1)
	{
		p1=gcd(a,n);		
		if(n>=p1)
		{
			n=n-p1;
			if(n==0)
			{
			  win=0;
			  break;
		    }
		}
		else
		{
		   win=1;
		   break;
	    }
		p2=gcd(b,n);		
		if(n>=p2)
		{
			n=n-p2;
			if(n==0)
			{
			  win=1;
			  break;
		    }
		}
		else
		{
			win=0;
			break;			
		}
	}
	cout<<win;
	return 0;
}

