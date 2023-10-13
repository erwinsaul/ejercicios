/* problem: AVION
 * code: 2655
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	string v[5];
	bool flag;
	size_t pos;
	for(int k=0;k<5;k++)
	{
		cin>>v[k];
	}
	flag=true;
	for(int k=0;k<5;k++)
	{
		pos = v[k].find("FBI");
		if(pos!=string::npos)
		{
			flag=false;
			cout<<(k+1)<<" ";
		}
	}
	if(flag)
		cout<<"HE GOT AWAY!";
	return 0;
}

