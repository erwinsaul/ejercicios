/* Problem: List of Top 3 Hills
 * Code: 0001
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Ad-Hoc / Ordenacion
 */


#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
	int v[10];
	for(int k=0;k<10;k++)
	{
		cin>>v[k];
	}
	sort(v,v+10);
	cout<<v[9]<<endl;
	cout<<v[8]<<endl;
	cout<<v[7]<<endl;
	return 0;
}

