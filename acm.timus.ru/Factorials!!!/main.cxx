/*  Problem:  Factorials!!!
 *  Code: 1083
 *  Site: acm.timus.ru
 *  Type: Ad-Hoc / Simulacion
 *  Status : Accepted
 */         
   


#include <iostream>
#include <string>

using namespace std;
int main(int argc, char **argv)
{
	int n,r,k;
	string s;
	cin>>n>>s;
	int tam=s.length();
	k=tam;
	int j=0;
	r=1;
	while(1)
	{
		k=j*tam;
		if(k>=n)
		  break;
		r=r*(n-k);
		j++;
	}
	cout<<r;
	return 0;
}

