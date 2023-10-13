/* Problem: Next Round
 * Code: 158-A
 * Site: codeforces.com
 * Status:Accepted
 * */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char **argv)
{
	int n, k,aux,r=0;
	cin>>n>>k;
	int v[n];
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	aux=v[k-1];
	for(int i=0;i<n;i++)
	{
		if(v[i]>=aux&&v[i]>0)
		{
			r++;
		}
	}
	cout<<r<<endl;
	return 0;
}

