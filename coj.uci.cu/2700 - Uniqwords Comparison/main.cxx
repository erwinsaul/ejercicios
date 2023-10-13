/* problem: 2700 - Uniqwords Comparison
 * code: 2570
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string a,b, r1 = "",r2= "",r3="";
	cin>>a>>b;
	size_t pos;
	for(int k=0;k<a.length();k++)
	{
		pos = b.find(a.at(k));
		if(pos==string::npos)
		{
			r1.push_back(a.at(k));
		}
		else
		{
			r3.push_back(a.at(k));
		}		
	}
	
	for(int k=0;k<b.length();k++)
	{
		pos = r3.find(b.at(k));
		if(pos==string::npos)
		{
			r2.push_back(b.at(k));
		}
	}
	
	sort(r1.begin(), r1.end());
	sort(r2.begin(), r2.end());
	sort(r3.begin(), r3.end());
	cout<<"First:"<<r1<<endl;
	cout<<"Second:"<<r2<<endl;
	cout<<"First&Second:"<<r3<<endl;
	return 0;
}

