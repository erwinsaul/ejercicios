/*  Problem: Even, Odd, Positive and Negative
 *  Code: 1066
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int n;
	int par,impar,positivo,negativo;
	par=impar=positivo=negativo=0;
	for(int k=0;k<5;k++ )
	{
		cin>>n;
		if(n%2==0)
		   par++;
		if(n%2!=0)
		   impar++;
		if(n>0)
		   positivo++;
		if(n<0)   
		   negativo++;
	}
	cout<<par<<" valor(es) par(es)"<<endl;
	cout<<impar<<" valor(es) impar(es)"<<endl;
	cout<<positivo<<" valor(es) positivo(s)"<<endl;
	cout<<negativo<<" valor(es) negativo(s)"<<endl;	
	return 0;
}

