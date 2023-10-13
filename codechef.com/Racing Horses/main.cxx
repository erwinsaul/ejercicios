/*  Problem:Racing Horses
 *  Code: HORSES
 *  Site: codechef.com
 *  Type: Ad-Hoc / Ordenacion
 *  Status: Pending
 */


#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
	int t,n,menor,d,aux;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int> v;
		for(int k=0;k<n;k++)
		{
			cin>>d;
			v.push_back(d);
		}
		sort(v.begin(),v.end());
		menor=1000000001;
		for(int k=0;k<(n-1);k++)
		{
		   aux=fabs(v[k]-v[k+1]);	
		   if(aux<menor)
		      menor=aux;
		}
		cout<<menor<<endl;
	} 
	return 0;
}

