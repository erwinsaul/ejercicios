/*   Problem: Smaller Perimeter
 *   Code: 1678
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Math
 */


#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

bool is_tri(int a, int b, int c)
{
	int v[3];
	v[0]=a;
	v[1]=b;
	v[2]=c;
	sort(v,v+3);
	return ((v[0]+v[1])>v[2]);
}
int main(int argc, char **argv)
{
	int t,a,b,c;
	int menor,s;
	cin>>t;
	menor=INT_MAX;
	s=0;
	while(t--)
	{
		cin>>a>>b>>c;
		if(is_tri(a,b,c))
		{
			s=a+b+c;
			if(s<menor)
			   menor=s;
		}		
	}
	cout<<menor<<endl;
	return 0;
}

