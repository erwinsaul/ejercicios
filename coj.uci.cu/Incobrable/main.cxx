/*  Problem: Incobrable
 *  Code: 1190 - I
 *  Site: coj.uci.cu
 *  Status: Pending
 *  Type: Simulacion
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n,s,t, d;
	while(true)
	{
		cin>>n;
		if(n==-1)
		   break;
		s=0,t=0;
		for(int k=0;k<n;k++)
		{
			cin>>d;
			s=s+d;
			if(s%100==0)
			{
				s=0;
				t++;
			}			   
		}
		cout<<t<<endl;
	}
	
	return 0;
}

