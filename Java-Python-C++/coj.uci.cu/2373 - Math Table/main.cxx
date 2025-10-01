/*   Problem: Math Table
 *   Code: 2373
 *   Site: coj.uci.cu
 *   Status: Accepted
 *   type: Simulacion
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a,b,c,d;
	int f,g,h,i;
	cin>>a>>b>>c>>d;
	f=a/b+c/d;
	g=c/a+d/b;
	h=d/c+b/a;
	i=b/d+a/c;	
	if(f>=g && f>=h && h>=i)
	  cout<<0<<endl;
	else if(g>=f && g>=h && g>=i)
	  cout<<1<<endl;
	else if(h>=f && h>=g && h>=i)
	  cout<<2<<endl;
	else if(i>=f && i>=g && i>=h)
	  cout<<3<<endl;
	else
	  cout<<0<<endl;
	return 0;
}

