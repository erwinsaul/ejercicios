/* problem:  Snow White
 * code: 1324
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int v[10];
	int r1;
	vector<int> r;
	vector<int>::iterator it;
	for(int k=0;k<9;k++)
	{
		cin>>v[k];
	}
	for(int k=0;k < (1<<9);k++)
	{
		r1=0;		
		r.clear();		
		for(int j=0;j< 9;j++)
		{
			if(k & (1<<j))
			{
				
				r1=r1+v[j];
				r.push_back(v[j]);
			}
		}
		//cout<<"r1"<<r1<<endl;
		if(r1==100 && r.size()==7)
		{
			break;
		}
	}
	sort(r.begin(), r.end());
	for(it=r.begin();it!=r.end();it++)
	{
		cout<<(*it)<<endl;
	}
	return 0;
}

