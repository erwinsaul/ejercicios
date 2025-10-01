/*  Problem: Average 3
 *  Code: 1040
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	double a,b,c,d,e;
	cin>>a>>b>>c>>d;	
	double media=(a+b+c+d)/4.0;
	cout.precision(1);
    cout.setf(ios::fixed);
	cout<<"Media: "<<media<<endl;
	if(media>=7.0)
	  cout<<"Aluno aprovado."<<endl;
	else if(media < 5.0)
	  cout<<"Aluno reprovado."<<endl;
	else if (media>=5.0 && media<=6.9)
	{
		cout<<"Aluno em exame."<<endl;
		cin>>e;
		cout<<"Nota do exame: "<<e<<endl;		
		media=(media+e)/2.0;	
		if(media>=5.0)
	       cout<<"Aluno aprovado."<<endl;
	    if(media < 5.0)
	       cout<<"Aluno reprovado."<<endl;
	   cout<<"Media final: "<<media<<endl;
	}	
	
	return 0;
}

