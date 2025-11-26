/* Problem: Cost Cutting
 * Code: 11727
 * Site: uva.onlinejudge.org
 * Type: Ad-Hoc
 * Status: Accepted
 */       


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char **argv)
{
	int n,aux;
	cin>>n;
	int k=1;
	while(n--)
	{
		vector<int> v;
		for(int i=0;i<3;i++)
		{
			cin>>aux;
			v.push_back(aux);
		}
		sort(v.begin(),v.end());
		cout<<"Case "<<k<<": "<<v[1]<<endl;
		k++;
	}
	return 0;
}

