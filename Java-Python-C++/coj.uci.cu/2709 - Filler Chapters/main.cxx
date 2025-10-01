/* problem: Filler Chapters
 * code: 2709
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    map<int, int> v;
    int n, m, p;
    cin>>n;
    cin>>m;
    for(int k=0;k<m;k++)
    {
		cin>>p;
		v[p]++;
	}
	cout<<n-v.size();
	return 0;
}

