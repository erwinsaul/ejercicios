/* problem: A. Circle Line
 * code: 278
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
typedef pair<ii, int> iii;


int main(int argc, char **argv)
{
	int n,s,t,d1=0,d2=0, i;
	int v[101];
	cin>>n;
	memset(v,0, sizeof(v));
	for(int k=2;k<=(n+1);k++)
	{
		cin>>t;
		if(k>n)
		{
			v[1]=t;
		}
		else
		{
			v[k]=t;
		}
	}
	cin>>s>>t;
	i=s;
	while(i!=t)
	{
		i++;
		if(i>n)
		  i=1;		  
		d1=d1+v[i];		
	}	
	i=s;
	while(i!=t)
	{
		if(i<1)
		  i=n+1;		  
		d2=d2+v[i];	
		i--;		
	}	
	cout<<min(d1,d2)<<endl;	
	return 0;
}

