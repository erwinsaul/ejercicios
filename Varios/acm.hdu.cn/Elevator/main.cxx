/* Problem: Elevator
 * Code: 1
 * Site: acm.hdu.edu.cn
 * Status: Accepted
 * Type: Simulacion
 */



#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
	int ant,pos,total,n, p;
	while(1)
	{
		ant=0;
		total=0;
		cin>>n;
		if(n==0)
		   break;
	    for(int k=0;k<n;k++)
	    {
			cin>>pos;
			if(pos>ant)
			{
				p=pos-ant;
				total=total + p*6;
			}
			else
			{
				p=ant-pos;
				total=total + p*4;
			}
			ant=pos;
		}
		cout<<total+(n*5)<<endl;	   
	}
	return 0;
}

