/*  Problem: 1599 - Maximum Sum
 *  Site: coj.uci.cu
 *  Status: Accepted
 *  Type: Max2d
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	int m[100][100];
	memset(m,0,sizeof(m));
	cin>>n;
	for(int i=0;i<n;i++)
	  for(int j=0;j<n;j++)
	  {
	     cin>>m[i][j];
	     if (i > 0) m[i][j] += m[i - 1][j];           // if possible, add from top
         if (j > 0) m[i][j] += m[i][j - 1];          // if possible, add from left
         if (i > 0 && j > 0) m[i][j] -= m[i - 1][j - 1];     // avoid double count
	  }
	int subRect=0;    
	int maxSubRect = INT_MIN;
	for (int i = 0; i < n; i++) 
	 for (int j = 0; j < n; j++)
	  for(int k=i; k<n ; k++)
	   for(int l=j;l<n;l++)
	   {
		  subRect = m[k][l];
		  if(i>0) subRect -= m[i-1][l];
		  if(j>0) subRect -= m[k][j-1];
		  if(i>0 && j>0) subRect +=m[i-1][j-1];
          maxSubRect =max(maxSubRect,subRect);		
	   }
	cout<<maxSubRect<<endl;
	return 0;
}

