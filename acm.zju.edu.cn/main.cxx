/* Problem: A Simple Task
 * Code: 1382
 * Site: acm.zju.edu.cn
 * Status: Accepted
 * */  


#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char **argv)
{
	int t, n, o, p;
	int r;
	cin>>t;
	while(t--)
	{
		cin>>n;
		o=1;p=0;
		while(r!=n)
		{
			r=o*pow(2,p);
			if(r>n)
			{
			  p=0;
			  o=o+2;	
			}
			else if(r==n)
			{
				break;
			}
			else
			  p++;
			
		}
		cout<<o<<" "<<p<<endl;
		
	}
	return 0;
}

