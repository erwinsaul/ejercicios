/*  Problem: Number Frequence
 *  Code: 1171
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Ad-Hoc
 */

#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>

using namespace std;
int main(int argc, char **argv)
{
    int t,n;
    map<int,int> m;
    map<int,int>::iterator it;
    cin>>n;
    while(n--)
    {
		cin>>t;
		m[t]++;
	}	
	for(it=m.begin();it!=m.end();++it)
	{
		printf("%d aparece %d vez(es)\n",(*it).first,(*it).second);
	}
	return 0;
}

