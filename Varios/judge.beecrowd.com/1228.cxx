#include <iostream>
using namespace std;
int posicion(int a[], int b[], int t, int p)
{
	for(int k=0;k<t;k++)
	{
		if(a[k]==b[p])
			return k;
	}
	return -1;
}

int main(int argc, char **argv)
{
	
	int ini[25];
	int fin[25];
	int t, r, j;	
	while(cin>>t)
	{
		r = 0;
		for(int k=0;k<t;k++)
		{
			cin>>ini[k];
		}
		for(int k=0;k<t;k++)
		{
			cin>>fin[k];
		}
		for(int k=0;k<t;k++)
		{
			while(ini[k] != fin[k])
			{ 	
							
				j = posicion(ini, fin, t, k);				
				swap(ini[j - 1], ini[j]);
				r++;
			}
		}
		cout<<r<<endl;
	}	
	return 0;
}

