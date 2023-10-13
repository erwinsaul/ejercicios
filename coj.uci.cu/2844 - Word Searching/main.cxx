/* problem: Word Searching
 * code: 2844
 * site: coj.uci.cu
 * status: pending
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string a, b;
	size_t pos;
	int r=0, tam;
	cin>>a;
    tam = a.length();
	while(cin>>b)
	{
		while(1)
		{
			pos = b.find(a);						
			if(pos==string::npos)
			     break;
			b = b.substr(0, pos) + b.substr(pos+tam, b.length());			
			r++;
		}
	}
	cout<<r;
	return 0;
}

