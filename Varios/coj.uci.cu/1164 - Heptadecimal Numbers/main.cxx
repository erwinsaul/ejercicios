/*   Problem: 1164 - Heptadecimal Numbers
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: String / Math
 */


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int t1,t2,l,c;
	string s1,s2;
	while(cin>>s1>>s2 && s1.compare("*")!=0 && s2.compare("*")!=0)
	{
	  t1=s1.length();	
	  t2=s2.length();	
	  l=max(t1,t2);
	  while(t1<l)
	  {
		  s1='0'+s1;
		  t1=s1.length();	
	  }
	  while(t2<l)
	  {
		  s2='0'+s2;
		  t2=s2.length();	
	  }
	  c=s1.compare(s2);
	  if(c==0)
	     cout<<"="<<endl;
	  else if(c>0)
	     cout<<">"<<endl;
	  else
	     cout<<"<"<<endl;
    }
	return 0;
}

