/* problem:Cuanto Practico
 * code: 21143
 * site: bo.spoj.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
	int h1,h2,m1,m2,h,m;
	scanf("%d:%d", &h1, &m1);
	scanf("%d:%d", &h2, &m2);
	h=h2-h1;	
	m=m2-m1;
	if(m<0)
	{
		m=60+m;
		h--;
	}
	if(h<0)
		h=24+h;
	cout<<h<<" horas, "<<m<<" minutos"<<endl;
	return 0;
}

