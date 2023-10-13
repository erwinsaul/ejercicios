/*  Problem: 10114 - Loansome Car Buyer
 *  Site: uva.onlinejudge.org
 *  Status: Accepted
 *  Type: Simulacion
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    double pago, monto;
    int m, n,r,d,i;
    double v[101],prestamo,cuota,p;
    while(cin>>m && m>0)
    {		
		cin>>pago>>monto>>n;				
		for(int k=0;k<n;k++)
		{
			cin>>d;
			cin>>p;
			for(i=d;i<101;i++)
				v[i]=p;
		}	
		prestamo=monto;	
		monto=monto+pago;
		cuota=prestamo/m;		
		r=0;
		i=1;		
		monto=monto-(monto*v[0]);		
		while(monto < (double)prestamo)
		{
			prestamo=prestamo-cuota;
			monto=monto-(monto*v[i]);			
			r++;
			i++;
		}
		cout<<r;
		if(r==1)
		   cout<<" month";
		else
		   cout<<" months";
		cout<<endl;
		
	}	
	return 0;
}

