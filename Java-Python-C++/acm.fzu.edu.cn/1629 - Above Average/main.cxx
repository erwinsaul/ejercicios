/* Problem: Above Average 
 * Code: 1629
 * Site: acm.fzu.edu.cn
 * Status: Accepted
 * Type: Simulacion
 */       
     


#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main(int argc, char **argv)
{
	vector<int> v;
	int t,n,d,c, s;
	float media;
	cin>>t;
	while(t--)
	{
		cin>>n;
		s=0;
		media=0.0;
		c=0;
		for(int k=0;k<n;k++)
		{
			cin>>d;
			v.push_back(d);
			s=s+d;
		}
		media=(float)s/n;
		for(int k=0;k<n;k++)
		{
			if(v[k]>media)
			  c++;
		}
		printf("%.3f",(float)(c*100)/n);
		cout<<"%"<<endl;
		v.clear();
	}
	return 0;
}

