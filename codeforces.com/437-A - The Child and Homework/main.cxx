/* problem: The Child and Homework
 * code: 437-A
 * site: codeforces.com
 * status:Pending
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string s[4];
	int n[4], g, p, ans,c;
	for(int k=0;k<4;k++)
	{
		cin>>s[k];
		n[k]=s[k].length()-2;
	}
	c=0;
	for(int k=0;k<4;k++)
	{
		g=0;p=0;
		
		for(int j=0;j<4;j++)
		{ 
			if(k!=j)
			{
			   if(n[k]>=2*n[j])g++;
			   if(n[k]<=(n[j]/2))p++;
           }
		}
		
       if(g==3||p==3){c++; ans=k;}
       
	}
	
	if(c==1)
	 cout<<(char)(65+ans);
    else
     cout<<"C";

	return 0;
}

