/*  Problem: Fixed Password
 *  Code: 1114
 *  Site: www.urionlinejudge.com.br
 *  Status: Pending
 *  Type: Beginner - 1
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	while(1)
	{
		cin>>n;
		if(n==2002)
		{
			cout<<"Acesso Permitido"<<endl;
			break;
		}
		cout<<"Senha Invalida"<<endl;
	}
	return 0;
}

