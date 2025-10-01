/* problem: Apthapi
 * code: 16192
 * site: bo.spoj.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;
int plato[100][2];
bool memo[32];
int n;

bool solve()
{
	set<int> s;
	set<int>::iterator it;
	memo[0]=true;
	for(int k=0;k<n;k++)
	{
		for(int j=0;j<32;j++)
		{
			if(memo[j])
			{
				s.insert(j|plato[k][0]);
				s.insert(j|plato[k][1]);
			}
		}
		for(it=s.begin();it!=s.end();it++)
		{
			memo[(*it)]=true;
		}
	}
	return memo[31];
}

int main(int argc, char **argv)
{
	ios::sync_with_stdio(false);
	string a,b;	
	while(cin>>n && n)
	{
		memset(plato, 0, sizeof(plato) );		
		memset(memo, false, sizeof(memo) );		
		for(int j=0;j<n;j++)
		{
			cin>>a>>b;			
			for(int k=0;k<(int)a.length();k++)
			{
				if(a.at(k)=='a') plato[j][0] = (plato[j][0] | 1);
				if(a.at(k)=='e') plato[j][0] = (plato[j][0] | 1<<1);
				if(a.at(k)=='i') plato[j][0] = (plato[j][0] | 1<<2);
				if(a.at(k)=='o') plato[j][0] = (plato[j][0] | 1<<3);
				if(a.at(k)=='u') plato[j][0] = (plato[j][0] | 1<<4);
			}
			
			for(int k=0;k<(int)b.length();k++)
			{
				if(b.at(k)=='a') plato[j][1] = (plato[j][1] | 1);
				if(b.at(k)=='e') plato[j][1] = (plato[j][1] | 1<<1);
				if(b.at(k)=='i') plato[j][1] = (plato[j][1] | 1<<2);
				if(b.at(k)=='o') plato[j][1] = (plato[j][1] | 1<<3);
				if(b.at(k)=='u') plato[j][1] = (plato[j][1] | 1<<4);
			}				
	    }
	    
	    if(solve())
	    {
			cout<<"EXISTE"<<endl;
		}
		else
		{
			cout<<"NO EXISTE"<<endl;
		}
	}
	return 0;
}

