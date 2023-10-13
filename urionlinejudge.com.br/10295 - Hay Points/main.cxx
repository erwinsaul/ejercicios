/*  Problem: 10295 - Hay Points
 *  Site: uva.onlinejudge.org
 *  Status:Accepted
 *  Type: Map
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int n, m;
	double price, total;
	map<string,double> dic;
	string s;
	cin>>n>>m;
	for(int k=0;k<n;k++)
	{
		cin>>s>>price;
		dic[s]=price;
	}
	for(int j=0;j<m;j++)
	{
		total=0.0;
	 while(cin>>s && s.compare(".")!=0)
	 {
		if(dic.find(s)!=dic.end())
		{
			total=total+dic[s];
		}
	 }
	 cout<<total<<endl;
    }
	return 0;
}

