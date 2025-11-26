/* problem: Automatic Checking Machine
 * code: 3056
 * site: coj.uci.cu
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int a[5],b[5];
	bool flag = true;
	for(int k=0;k<5;k++)
	{
		cin>>a[k];
	}
	for(int k=0;k<5;k++)
	{
		cin>>b[k];
	}
	for(int k=0;k<5;k++)
	{
		if(a[k]==b[k])
		{
			flag=false;
			break;
		}
	}
	if(flag)
		cout<<"Y"<<endl;
	else
		cout<<"N"<<endl;
	return 0;
}

