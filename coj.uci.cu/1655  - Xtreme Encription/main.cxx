/* problem:  Xtreme Encription
 * code: 1655
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string a,b,c;
	int k,j,t1,t2;
	while(cin>>a>>b)
	{
		t1 = a.length();
		t2 = b.length();
		k = 0;
		j = 0;
		c.clear();
		while(k<t1 && j<t2)
		{
			if(a.at(k)==b.at(j))
			{
				c.push_back(b.at(j));
				k++;
		    }
		    j++;
		}
		if(a==c)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}

