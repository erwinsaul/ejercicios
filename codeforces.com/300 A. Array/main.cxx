/*   Problem:A. Array
 *   Site: codeforces.com
 *   Status: Accepted
 *   type: Ad-Hoc
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	vector<int> v1,v2,v3;
	int n, d;
	cin>>n;
	
	for(int k=0;k<n;k++)
	{
		cin>>d;
		if(d<0)
		   v1.push_back(d);
		else if(d==0)
		   v3.push_back(d);
		else
		   v2.push_back(d);
	}
	
	if(v1.size()%2==0)
	{
		d=v1.back();
		v1.pop_back();
		v3.push_back(d);
	}
	if(v2.size()==0)
	{
		d=v1.back();
		v1.pop_back();
		v2.push_back(d);
		d=v1.back();
		v1.pop_back();
		v2.push_back(d);
	}
	bool flag=false;
	cout<<v1.size()<<" ";	
	for(int k=0;k<v1.size();k++)
	{
		if(flag)
		  cout<<" ";
		flag=true;
	    cout<<v1[k];
	}
	cout<<endl;
	flag=false;
	cout<<v2.size()<<" ";	
	for(int k=0;k<v2.size();k++)
	{
		if(flag)
		  cout<<" ";
		flag=true;
	    cout<<v2[k];
	}
	cout<<endl;
	flag=false;
	cout<<v3.size()<<" ";	
	for(int k=0;k<v3.size();k++)
	{
		if(flag)
		  cout<<" ";
		flag=true;
	    cout<<v3[k];
	}
	
	return 0;
}

