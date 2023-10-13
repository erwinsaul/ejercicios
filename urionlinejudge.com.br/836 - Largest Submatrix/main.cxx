/*  Problem: 836 - Largest Submatrix
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Max 2D sum
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int v[25][25];
	string s;
	int casos,subRec,maxSubRect;
	getline(cin,s);
	istringstream ss(s);
	ss>>casos;
	int n,t;
	getline(cin,s);
	bool flag=false;
	while(casos--)
	{
		n=0;
		while(getline(cin,s) && s.length()>0)
		{
			t=(int)s.length();
			for(int j=0 ;j<t;j++)
			{
			 v[n][j]=s.at(j)=='0'?-1000:1;
			 if(n>0) v[n][j]+=v[n-1][j];
			 if(j>0) v[n][j]+=v[n][j-1];
			 if(n>0 && j>0) v[n][j]-=v[n-1][j-1];
		    }
		    n++;
		}	
	  maxSubRect=INT_MIN;	   
	  for(int i=0;i<n;i++)
	  {
		for(int j=0;j<n;j++)
		{
			for(int k=i;k<n;k++)
			{
				for(int l=j;l<n;l++)
				{
				  subRec=v[k][l];
				  if(i>0) subRec-=v[i-1][l];
				  if(j>0) subRec-=v[k][j-1];
				  if(i>0 && j>0) subRec +=v[i-1][j-1];
				  maxSubRect = max(maxSubRect,subRec);
				}
			}
		}
	}
	if(flag)
	  cout<<endl;
	flag=true;
	if(maxSubRect > 0)
	  cout<<maxSubRect<<endl;
	else
	  cout<<0<<endl;
	}
	return 0;
}

