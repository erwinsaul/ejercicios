/* Problem: HangOver 
 * Code: 1002
 * Site: acm.fzu.edu.cn
 * Status: Accepted
 * Type: Ad-Hoc / Simulacion
 */ 


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	double c, d;
	while(true)
	{
		d=0.00;
		cin>>c;
		if(c==0.00)
		   break;
		n=1;   
		while(d<c)
		{
			d=d+(1.0/(n+1.0));		
			n++;
		}
		cout<<(n-1)<<" card(s)"<<endl;
	}
	return 0;
}

