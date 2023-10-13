#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	int n, m, r;
	int v[501];
	for(int k=1;k<=500;k++)
	{
		m = k;
		r = k;
		while(r>1)
		{
			if(r%2==0)
			{
				r = r/2;
			}
			else
			{
				r = 3*r + 1;
			}
			m = max(m,r);
		}
		v[k] = m;		
	}
	while(cin>>n && n)
	{
		cout<<v[n]<<endl;
	}
	return 0;
}

