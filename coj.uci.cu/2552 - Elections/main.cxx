/* problem: Elections
 * code: 2552
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char **argv)
{
	int n, t=0;
	int v[10],c;
	double p[10];
	bool flag=false;
	cin>>n;
	for(int k=0;k<n;k++)
	{
		cin>>v[k];
		t=t+v[k];
	}
	for(int k=0;k<n;k++)
	{
		p[k] = (v[k]*100.0) / t;
		if(p[k]>=45.00)
		   flag=true;		
	}
	/*for(int k=0;k<n;k++)
	{
		cout<<p[k]<<endl;
	}*/
	if(flag)
	{
		cout<<"1";
	}
	else
	{
		for(int k=0;k<n;k++)
		{
			if(p[k]>=40.00)
			{
				c=0;
				for(int j=0;j<n;j++)
				{
					if(k!=j && (p[k]-p[j])>=10.00)
					{
						c++;
					}
				}
			}
		}
		if(c==(n-1))
		   cout<<"1";
		else
		   cout<<"2";
	}
	
	return 0;
}

