/* problem: Another Simple Problem II
 * code: 2803
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

char m[10][10];
int n;

bool comprobar(int f, int c, char d)
{
	int x1, y1;
	int x2, y2;
	int x3, y3;
	int x4, y4;
	x1 = f-1; 
	y1 = c;
	x2 = f;
	y2 = c-1;
	x3 = f;
	y3 = c+1;
	x4 = f+1;
	y4 = c;	
	
	if(x1>=0 && x1<n)
		{
			if(y1>=0 && y1<n)
			{
				if(d==m[x1][y1])
				{
						return true;
				}
			}
		}
	
	if(x2>=0 && x2<n)
		{
			if(y2>=0 && y2<n)
			{
				if(d==m[x2][y2])
				{
						return true;
				}
			}
		}
		
	if(x3>=0 && x3<n)
		{
			if(y3>=0 && y3<n)
			{
				if(d==m[x3][y3])
				{
						return true;
				}
			}
		}
		
	if(x4>=0 && x4<n)
		{
			if(y4>=0 && y4<n)
			{
				if(d==m[x4][y4])
				{
						return true;
				}
			}
		}
	
	return false;
}

int main(int argc, char **argv)
{
	int t;
	bool r;
	cin>>t;
	while(t--)
	{
		cin>>n;
		r=true;
		for(int k=0;k<n;k++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>m[k][j];
			}
		}
		for(int k=0;k<n;k++)
		{
			for(int j=0;j<n;j++)
			{
				if(comprobar(k,j, m[k][j]))
				{
					r=false;
					j=n+1;
					k=n+1;
				}
			}
		}
		if(r)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

