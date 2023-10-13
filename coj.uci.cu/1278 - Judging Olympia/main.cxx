/*   Problem:  1278 - Judging Olympia
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Simulacion
 */


#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char **argv)
{
	int menor,mayor,s;
	int v[6];
	while(1)
	{
		menor=INT_MAX;
		mayor=INT_MIN;
		s=0;
		cin>>v[0]>>v[1]>>v[2]>>v[3]>>v[4]>>v[5];
		for(int k=0;k<6;k++)
		{
			if(v[k]>mayor)
			  mayor=v[k];
			if(v[k]<menor)
			  menor=v[k];
			s+=v[k];
		}
		if(s==0)
		  break;
		else
		  cout<<(double)(s-mayor-menor)/4<<endl;
	}
	return 0;
}

