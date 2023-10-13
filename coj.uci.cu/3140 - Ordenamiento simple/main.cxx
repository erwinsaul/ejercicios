/* problem:  Ordenamiento simple
 * code: 3140
 * site: coj.uci.cu
 * status: TLE
 */
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char **argv)
{
	vector<int> v;
	vector<int>::iterator it;
	int n;
	while(cin>>n)
	{
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<endl;
	}
	return 0;
}

