/*  Problem: Sequence of Numbers and Sum
 *  Code: 1101					
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n,m,aux;
    while(1)
    {
		cin>>n>>m;
		if(n<=0||m<=0)
		  break;
		if(n>m)
		{
			aux=n;
			n=m;
			m=aux;
		}
		aux=0;
		for(int k=n;k<=m;k++)
		{
			cout<<k<<" ";
			aux+=k;
		}
		cout<<"Sum="<<aux<<endl;
	}	
	return 0;
}

