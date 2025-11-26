/*   Problem: 1041 - Purchase of Turkeys
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type:  Math
 */



#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	map<int,int> m;
	map<int,int>::iterator it;
	double r=6.789,s;
	istringstream ss;	
	for(int k=0;k<=9;k++)
	{
		
		for(int i=0;i<=9;i++)
		{
			s=k*10+r+(i/10000.0);			
			m[(int)((s/72.0)*1000)]++;
		}
	}
	
	
	for(it=m.begin();it!=m.end();it++)
	{
		printf("%.2f\n",(double)(*it).first/1000.0);
	}
	
	return 0;
}

