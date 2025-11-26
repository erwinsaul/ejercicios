/* problem: Help!
 * code: 1367
 * site: www.urionlinejudge.com.br
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	char c;
	string s;
	int n, t, total, p;
    int v[27];
    int f[27];
	while(cin>>n && n)
	{
		total=0;
		p=0;
		memset(v,0,sizeof(v));
		memset(f,0,sizeof(f));
		while(n--)
		{
		  cin>>c>>t>>s;
		  if(s.compare("correct")==0 && f[c-65]==0)
		  {
			  total=total+t+(v[c-65]*20);
			  p++;
			  v[c-65]++;
			  f[c-65]=1;
		  }
		  if(s.compare("incorrect")==0)
		  {
			  v[c-65]++;
		  }
	    }
	    cout<<p<<" "<<total<<endl;
	}
	return 0;
}

